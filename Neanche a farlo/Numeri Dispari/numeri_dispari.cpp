#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        fileInput >> length;
        for(int j=0; j<length; j++) {
            int number;
            fileInput >> number;
            if(number%2!=0)
                fileOutput << number << " ";
        }
        fileOutput << endl;
    }
}