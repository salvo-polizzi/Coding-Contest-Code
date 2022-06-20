#include <iostream>

using namespace std;

template<typename T>
class BSTNode{
    private:
        T key;
        BSTNode<T>* left;
        BSTNode<T>* right;
        BSTNode<T>* parent;


        template<typename U>
        friend class BST;
    public:
        BSTNode(T key): key(key), left(nullptr), right(nullptr), parent(nullptr) {}

        T getKey() {return this->key;}
        BSTNode<T>* getLeft() {return this->left;}
        BSTNode<T>* getRight() {return this->right;}

        friend ostream& operator<<(ostream& os, BSTNode<T>& ptr) {
            os << ptr.key;
            return os;
        }
};



template<typename T>
class BST{
    private:
        BSTNode<T>* root;
    public:
        BST(): root(nullptr) {}

        bool isEmpty() {return root == nullptr;}

        void insert(BSTNode<T>* ptr, T key) {
            if(!ptr)
                return; 

            if(!(ptr->left) && key <= ptr->key) {
                ptr->left = new BSTNode<T>(key);
                ptr->left->parent = ptr;
                return;
            }

            if(!(ptr->right) && key > ptr->key) {
                ptr->right = new BSTNode<T> (key);
                ptr->right->parent = ptr;
                return;
            }


            if(key <= ptr->key)
                insert(ptr->left, key);
            else
                insert(ptr->right, key);
        }


        void insert(T key) {
            if(this->isEmpty()) {
                root = new BSTNode<T> (key);
                return;
            }
            insert(root, key);
        }


        BSTNode<T>* min(BSTNode<T>* ptr) {

            if(!ptr) {
                return nullptr;
            }

            while(ptr->left) {
                ptr = ptr->left;
            }

            return ptr;
        }

        BSTNode<T>* successor(BSTNode<T>* x) {
            if(!x)
                return nullptr;

            if(x->right)
                return min(x->right);
            
            BSTNode<T>* y = x->parent;
            while(x && x == y->right) {
                x = y;
                y = y->parent;
            }

            return y;

        }


        BSTNode<T>* search(BSTNode<T>* ptr, T key) {

            if(!ptr)
                return nullptr;

            if(key == ptr->key)
                return ptr;

            if(key <= ptr->key)
                return search(ptr->left, key);
            else
                return search(ptr->right, key);

        }


        BSTNode<T>* search(T key) {
            if(this->isEmpty())
                return nullptr;
            return search(root, key);
        }


        BSTNode<T>* remove(BSTNode<T>* ptr) {
            if(!ptr)
                return nullptr;

            //CASO 1: il nodo è una foglia
            if(ptr == root && !(ptr->left) && !(ptr->right)) {
                root = nullptr;
                return ptr;
            }

            if(!(ptr->left) && !(ptr->right)) {
                if(ptr == ptr->parent->left && ptr->parent)
                    ptr->parent->left = nullptr;
                else 
                    ptr->parent->right = nullptr;
                return ptr;
            }

            //CASO 2: il nodo ha un figlio
            if(ptr == root && !(ptr->left) && ptr->right) {
                ptr->right->parent = nullptr;
                root = ptr->right;

                return ptr;
            }

            if(ptr == root && !(ptr->right) && ptr->left) {
                ptr->left->parent = nullptr;
                root = ptr->left;

                return ptr;
            }

            if(!(ptr->left) && ptr->right) {
                ptr->right->parent = ptr->parent;
                if(ptr == ptr->parent->left) {
                    ptr->parent->left = ptr->right;
                }else if(ptr == ptr->parent->right) {
                    ptr->parent->right = ptr->right;
                }
                return ptr;
            }

            if(ptr->left && !(ptr->right)) {
                ptr->left->parent = ptr->parent;
                if(ptr == ptr->parent->left) {
                    ptr->parent->left = ptr->left;
                }else if(ptr == ptr->parent->right) {
                    ptr->parent->right = ptr->left;
                }
                return ptr;
            }
            return nullptr;
        }


        BSTNode<T>* remove(T key) {
            if(this->isEmpty())
                return nullptr;

            BSTNode<T>* ptr = search(key);

            if(!ptr)
                return nullptr;
            
            BSTNode<T>* toRemove = this->remove(ptr);

            if(toRemove)
                return toRemove;
            
            BSTNode<T>* next = this->successor(ptr);

            T swap = ptr->key;
            ptr->key = next->key;
            next->key = swap;

            toRemove = this->remove(next);

            return toRemove;
        }
        

        bool isLeaf(BSTNode<T>* ptr) {return !(ptr->left) && !(ptr->right);}
        
        int max(int val1, int val2) {
            if(val1 > val2)
                return val1;
            return val2;
        }

        int altezza(BSTNode<T>* ptr) {
        
            if(!ptr)
                return 0;

            int leftHeight = altezza(ptr->left);
            int rightHeight = altezza(ptr->right);
            int maxHeight = max(leftHeight, rightHeight) + 1;

            return maxHeight;
            
        }

        int altezza() {return altezza(root);}

};