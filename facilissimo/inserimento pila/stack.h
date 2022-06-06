#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

template<typename H>
class Stack{
    private:
        H* stack; 
        int size;
        int maxSize;
        int top;
    public:
        Stack(int _maxSize): maxSize(_maxSize), size(0), top(-1) {
            stack = new H[maxSize];
        }

        void push(H val) {
            stack[++top] = val;
            size++;
        }


        friend ostream& operator<<(ostream& os, const Stack& s) {
            for(int i = s.top; i >= 0; i--) {
                os << s.stack[i] << " ";
            }
            return os;
        }
    

};


#endif