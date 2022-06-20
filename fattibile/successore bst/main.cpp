#include "bst.h"
#include <fstream>

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);
    
    for(int i=0; i<100; i++) {
        BST<int> intBST;
        BST<double> doubleBST;

        string type;
        input >> type;

        int numOp;
        input >> numOp;

        int numSucc;
        input >> numSucc;

        for(int j=0; j<numOp; j++) {
            if(type == "int") {
                string op;
                input >> op;

                if(op.substr(0, op.find(":")) == "ins") {
                    int value = stoi(op.substr(op.find(":") + 1));
                    intBST.insert(value);
                }else {
                    int value = stoi(op.substr(op.find(":") + 1));
                    intBST.remove(value);
                }
            }else {
                string op;
                input >> op;

                if(op.substr(0, op.find(":")) == "ins") {
                    double value = stod(op.substr(op.find(":") + 1));
                    doubleBST.insert(value);
                }else {
                    double value = stod(op.substr(op.find(":") + 1));
                    doubleBST.remove(value);
                }
            }
        }

        //visita
        /*if(type == "int") {
            intBST.inorder();
            cout << endl;
        }else
            doubleBST.inorder();*/

        for(int j=0; j<numSucc; j++) {
            if(type == "int") {
                int value;
                input >> value;

                BSTNode<int>* succ = intBST.successor(intBST.search(value));
                if(!succ)
                    output << "-1 ";
                else
                    output << succ->getKey() << " ";
            }else {
                double value;
                input >> value;

                BSTNode<double>* succ = doubleBST.successor(doubleBST.search(value));
                if(!succ)
                    output << "-1 ";
                else
                    output << succ->getKey() << " ";
            }
        }
        output << endl;
    }
}