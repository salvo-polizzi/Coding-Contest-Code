#include "bst.h"
#include <fstream>

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        string type;
        input >> type;

        int numOfEl;
        input >> numOfEl;

        string print;
        input >> print;

        BST<int> intBST;
        BST<double> doubleBST;
        BST<bool> boolBST;
        BST<char> charBST;

        for(int j=0; j<numOfEl; j++) {
            if(type == "int") {
                int value;
                input >> value;
                intBST.insert(value);
            } else if(type == "double") {
                double value;
                input >> value;
                doubleBST.insert(value);
            } else if(type == "bool") {
                bool value;
                input >> value;
                boolBST.insert(value);
            } else {
                char value;
                input >> value;
                charBST.insert(value);
            }
        }

        if(type == "int") {
            if(print == "preorder")
                intBST.preorder(output);
            else if(print == "postorder")
                intBST.postorder(output);
            else
                intBST.inorder(output);
        }else if(type == "double") {
            if(print == "preorder")
                doubleBST.preorder(output);
            else if(print == "postorder")
                doubleBST.postorder(output);
            else
                doubleBST.inorder(output);
        }else if(type == "bool") {
            if(print == "preorder")
                boolBST.preorder(output);
            else if(print == "postorder")
                boolBST.postorder(output);
            else
                boolBST.inorder(output);
        } else{
            if(print == "preorder")
                charBST.preorder(output);
            else if(print == "postorder")
                charBST.postorder(output);
            else
                charBST.inorder(output);
        }
        output << endl;
    }
}