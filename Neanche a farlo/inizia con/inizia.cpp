#include<iostream>
#include<fstream>
#include<string>


using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt",fstream::out);

    for(int i=0; i<100; i++) {
        char toFind;
        fileInput >> toFind;
        for(int j=0; j<3; j++) {
            int length;
            string actual;
            fileInput >> length >> actual;
            if(actual[0]==toFind)
                fileOutput << actual << " ";
        }
        fileOutput << endl;
    }
}