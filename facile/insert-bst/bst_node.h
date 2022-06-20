#include <iostream>

using namespace std;

template<typename T>
class BSTNode{
    private:
        T key;
        BSTNode<T>* left;
        BSTNode<T>* right;

        template<typename U>
        friend class BST;
    public:
        BSTNode(T key): key(key), left(nullptr), right(nullptr) {}


        friend ostream& operator<<(ostream& os, BSTNode<T>& nodo) {
            os << nodo.key;
            return os; 
        }
};