#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);
    for(int i=0; i<100; i++) {
        int count=0;
        for(int j=0; j<3; j++) {
            int length=0;
            string estremi="";
            fileInput >> length >> estremi;
            if(estremi[0]==estremi[length-1])
                count++;
        }
        fileOutput << count << endl;
    }
}