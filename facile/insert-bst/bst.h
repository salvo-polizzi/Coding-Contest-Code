#include "bst_node.h"

template<typename T>
class BST{
    private:
        BSTNode<T>* root;
    public:
        BST(): root(nullptr) {}

        bool isEmpty() {return root == nullptr;}

        void insert(BSTNode<T>* ptr, T key) {
            if(this->isEmpty()) {
                root = new BSTNode<T> (key);
                return;
            }

            if(!(ptr->left) && key<=ptr->key) {
                ptr->left = new BSTNode<T> (key);
                return;
            }else if(!(ptr->right) && key > ptr->key) {
                ptr->right = new BSTNode<T> (key);
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


        void visit(BSTNode<T>* ptr, ostream& os) {
            os << *ptr << " ";
        }

        // PREORDER VISIT
        void preorder(BSTNode<T>* ptr, ostream& os) {
            if(!ptr) 
                return;
            
            visit(ptr, os);
            preorder(ptr->left, os);
            preorder(ptr->right, os);
        }

        void preorder(ostream& os) {preorder(root, os);}


        // POSTORDER VISIT
        void postorder(BSTNode<T>* ptr, ostream& os) {
            if(!ptr) 
                return;
            
            postorder(ptr->left, os);
            postorder(ptr->right, os);
            visit(ptr, os);
        }

        void postorder(ostream& os) {postorder(root, os);}


        // INORDER VISIT
        void inorder(BSTNode<T>* ptr, ostream& os) {
            if(!ptr) 
                return;
            
            inorder(ptr->left, os);
            visit(ptr, os);
            inorder(ptr->right, os);
        }

        void inorder(ostream& os) {inorder(root, os);}


};