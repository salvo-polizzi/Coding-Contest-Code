#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int seqlen;
        fileInput >> seqlen;
        for(int j=0; j<seqlen; j++) {
            double real;
            fileInput >> real;
            int integer_part = (int) real;
            double finale = real - integer_part;
            fileOutput << finale << " ";
        }
        fileOutput << endl;
    }
}