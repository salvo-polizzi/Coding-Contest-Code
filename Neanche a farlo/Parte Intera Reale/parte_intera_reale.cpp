#include<iostream>
#include<fstream>
#include<cmath>


using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int seqlen=0;
        fileInput >> seqlen;
        for(int j=0; j<seqlen; j++) {
            double integer;
            fileInput >> integer;
            int intero = (int)integer;
            fileOutput << intero << " ";
        }
        fileOutput << endl;
    }
}