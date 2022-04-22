#include<iostream>
#include<fstream>
#include<iomanip>
#include<typeinfo>
#include<cmath>

using namespace std;


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        input >> length;

        double sum = 0;
        for(int j=0; j<length; j++) {
            double temp;
            input >> temp;
            sum+=temp;
        }

        output << sum << endl;
    }
}