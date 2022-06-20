#include "LOT.h"
#include <fstream>

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        string type;
        input >> type;

        int k;
        input >> k;

        LOT<int> intLot(k);
        LOT<double> doubleLot(k);

        string in = "";
        while(in != "#" && !(input.eof())) {
            input >> in;
            if(in == "ins") {
                if(type == "int") {
                    int value;

                    input >> value;
                    intLot.insertLot(value);
                }else {
                    double value;

                    input >> value;
                    doubleLot.insertLot(value);
                }
            }else if(in == "canc") {
                if(type == "int") {
                    int value;

                    input >> value;
                    intLot.removeLot(value);
                }else {
                    double value;

                    input >> value;
                    doubleLot.removeLot(value);
                }
            }
        }
        
        if(type == "int")
            output << intLot << endl;
        else 
            output << doubleLot << endl;
    }
}