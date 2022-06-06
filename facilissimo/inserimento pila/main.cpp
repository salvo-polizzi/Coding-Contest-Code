#include "stack.h"
#include <fstream> 
#include <typeinfo>
#include <sstream>




int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        string _type;
        input >> _type;

        int size;
        input >> size;

        Stack<int>* pilaOfInt = nullptr;
        Stack<double>* pilaOfDouble = nullptr;
        Stack<bool>* pilaOfBool = nullptr;
        Stack<char>* pilaOfChar = nullptr;

        
        if(_type == "int") 
            pilaOfInt = new Stack<int> (size);
        else if(_type == "double")
            pilaOfDouble = new Stack<double> (size);    
        else if(_type == "bool")
            pilaOfBool = new Stack<bool> (size);
        else 
            pilaOfChar = new Stack<char> (size);

        
        
        for(int i=0; i<size; i++) {
            if(_type == "int") {
                int value;
                input >> value;
                pilaOfInt->push(value);
            } else if(_type == "double") {
                double value;
                input >> value;
                pilaOfDouble->push(value);
            } else if(_type == "bool") {
                bool value;
                input >> value;
                pilaOfBool->push(value);
            }else {
                char value;
                input >> value;
                pilaOfChar->push(value);
            }
        }

        
        if(_type == "int") 
            output << *pilaOfInt << endl;
        else if(_type == "double")
            output << *pilaOfDouble << endl;   
        else if(_type == "bool")
            output << *pilaOfBool << endl;
        else 
            output << *pilaOfChar << endl;
    }
}
