#include<iostream>
#include<fstream>
#include<string>


using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt",fstream::out);

    for(int i=0; i<100; i++) { 
        for(int j=0; j<3; j++){
            int length;
            fileInput >> length;
            string nome;
            fileInput >> nome;
            nome[0] = toupper(nome[0]);
            fileOutput << nome << " ";
        }
        fileOutput << endl;
    }
}