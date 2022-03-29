#include<iostream>
#include<fstream>


using namespace std;

//swap of integers
void swap(int& a, int& b) {
    int temp = a;
    a=b;
    b=temp;
}


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int totalComics=0;
        fileInput >> totalComics;

        int numberOfComic=0;
        fileInput >> numberOfComic;

        int actualNumber=0;
        bool found = false;

        for(int j=1; j<=totalComics; j++) {
            fileInput >> actualNumber;
            if(actualNumber == numberOfComic) {
                fileOutput << j << endl;
                found = true;
            }
        }
        if(!found)
            fileOutput << "0" << endl;
    }
}