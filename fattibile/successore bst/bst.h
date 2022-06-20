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


        friend ostream& operator<<(ostream& os, BSTNode<T>& nodo) {
            os << nodo.key << " ";
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
            
            if(!(ptr->left) && key <= ptr->key) {
                ptr->left = new BSTNode<T> (key);
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
                root = new BSTNode<T>(key);
                return;
            }
            insert(root, key);
        }


        BSTNode<T>* search(T key, BSTNode<T>* ptr) {
            if(!ptr)
                return nullptr;
            
            if(ptr->key == key)
                return ptr;
            
            if(key <= ptr->key) 
                return search(key, ptr->left);
            else
                return search(key, ptr->right);
            
            return nullptr;
        }

        BSTNode<T>* search(T key) {return search(key, root);}

        BSTNode<T>* min(BSTNode<T>* ptr) {
            if(!ptr)
                return nullptr;
            
            while(ptr->left)
                ptr = ptr->left;
            

            return ptr;
        }


        BSTNode<T>* min() {return min(root);}

        BSTNode<T>* successor(BSTNode<T>* ptr) {
            if(!ptr) 
                return nullptr;
                
            if(ptr->right)
                return min(ptr->right);
            
            BSTNode<T>* y = ptr->parent;
            while(y && ptr == y->right) {
                ptr = y;
                y = y->parent; 
            }

            

            return y;
        }


        BSTNode<T>* remove(BSTNode<T>* ptr) {
            // CASO 1
            if(ptr == root && !(ptr->left) && !(ptr->right)) {
                root = nullptr;
                return ptr;
            }

            if(!(ptr->left) && !(ptr->right)) {
                if(ptr == ptr->parent->left) {
                    ptr->parent->left = nullptr;
                    return ptr;
                }else {
                    ptr->parent->right = nullptr;
                    return ptr;
                }
            }


            //CASO 2
            if(ptr == root && ptr->left && !(ptr->right)) {
                ptr->left->parent = nullptr;
                root = ptr->left;
                return ptr;
            }

            if(ptr == root && !(ptr->left) && ptr->right) {
                ptr->right->parent = nullptr;
                root = ptr->right;
                return ptr;
            }


            if(ptr->left && !(ptr->right)) {
                ptr->left->parent = ptr->parent;
                if(ptr == ptr->parent->left) {
                    ptr->parent->left = ptr->left;
                    return ptr;
                }else {
                    ptr->parent->right = ptr->left;
                    return ptr;
                }
            }


            if(!(ptr->left) && ptr->right) {
                ptr->right->parent = ptr->parent;
                if(ptr == ptr->parent->left) {
                    ptr->parent->left = ptr->right;
                    return ptr;
                }else {
                    ptr->parent->right = ptr->right;
                    return ptr;
                }
            }


            return nullptr;
        }


        BSTNode<T>* remove(T key) {
            if(this->isEmpty())
                return nullptr;
            
            BSTNode<T>* toDelete = search(key);

            if(!toDelete)
                return nullptr;
            
            BSTNode<T>* toRemove = remove(toDelete);
            if(toRemove)
                return toRemove;
            
            BSTNode<T>* next = successor(toDelete);
            T swap = toDelete->key;
            toDelete->key = next->key;
            next->key = swap;

            toRemove = remove(next);
            return toRemove;
        }

        

        void visit(BSTNode<T>* node) {cout << *node << " ";}

        void inorder(BSTNode<T>* ptr) {
            if(!ptr)
                return;
            
            inorder(ptr->left);
            visit(ptr);
            inorder(ptr->right);
        }

        void inorder() {inorder(root);}

};