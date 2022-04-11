#include<iostream>
#include<fstream>

using namespace std;

int main() {

    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);



    for(int i=0; i<100; i++) {
        string doublename;
        fileInput >> doublename;
        doublename = doublename.substr(0,doublename.length()/2);
        fileOutput << doublename << endl;
    }
}