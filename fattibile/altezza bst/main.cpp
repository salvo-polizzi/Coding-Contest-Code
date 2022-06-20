#include "bst.h"
#include <fstream>
#include <string>


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        BST<int> intBST;
        BST<double> doubleBST;
        
        string type;
        input >> type;

        int operations;
        input >> operations;
        //cout << operations << " ";

        for(int j=0; j<operations; j++) {
            string worktree;
            input >> worktree;
            //cout << worktree << endl;

            string op = worktree.substr(0, worktree.find(":"));
            //cout << op << endl;
            if(op == "ins") {
                if(type == "int") {
                    int value = stoi(worktree.substr(worktree.find(":") + 1));

                    intBST.insert(value);
                }else {
                    double value = stod(worktree.substr(worktree.find(":") + 1));


                    doubleBST.insert(value);
                } 
            }else {
                if(type == "int") {
                    int value = stoi(worktree.substr(worktree.find(":") + 1));

                    intBST.remove(value);
                }else {
                    double value = stod(worktree.substr(worktree.find(":") + 1));

                    doubleBST.remove(value);
                }
            }
        }

        if(type == "int")
            output << intBST.altezza() << endl;
        else
            output << doubleBST.altezza() << endl;
    }
}