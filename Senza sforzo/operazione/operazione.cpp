#include<iostream>
#include<fstream>
#include<sstream>
#include<cctype>
#include<string>

using namespace std;


int operation(string expression, char& op) {
    int indexOperator;
    
    for(int i=0; i<expression.length(); i++) {
        if(!isdigit(expression[i])) {
            op = expression[i];
            indexOperator = i;
            break;
        }
    }

    int firstOp = stoi(expression.substr(0,indexOperator));
    int secondOp = stoi(expression.substr(indexOperator+1));

    /*stringstream ss;
    
    ss << expression.substr(0,indexOperator);
    int firstOp;
    ss >> firstOp;

    ss.clear();

    ss << expression.substr(indexOperator+1);
    int secondOp;
    ss >> secondOp;*/

    if(op == '+') 
        return firstOp + secondOp;
    else if(op == '-')
        return firstOp - secondOp;
    else
        return firstOp * secondOp;

}


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);


    for(int i=0; i<100; i++) {
        int numberOfExpr;
        input >> numberOfExpr;

        for(int j=0; j<numberOfExpr; j++) {
            string expression;
            input >> expression;
            char op;
            
            int result = operation(expression, op);
            output << result << " "; 
        }

        output << endl;
    }

}