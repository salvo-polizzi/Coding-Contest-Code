#include<iostream>
#include<fstream>
#include<cmath>
#include<string>

using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);


    for(int i=0; i<100; i++) {
        string pari;
        fileInput >> pari;
        if(pari.length()%2==0)
            fileOutput << pari << endl;
        else {
            string dispari = pari.erase(pari.length()-1);
            fileOutput << dispari << endl;
        }

    }
}