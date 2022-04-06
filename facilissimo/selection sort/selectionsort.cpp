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
        int length;
        fileInput >> length;

        //Create an array of integer for all iterations
        int array[length];
        for (int t = 0; t < length; t++) {
            fileInput >> array[t];
        }

        //Variable of sum of (k-i) index
        int sum_index = 0;

        //Selection Sort
        for(int j=0; j<length; j++) {
            int indexMin = j; 
            for(int z=j+1; z<length; z++) {
                if(array[z]<array[indexMin]){
                    indexMin=z;
                }
            }
            sum_index+=indexMin-j;
            swap(array[j], array[indexMin]);
        }
        fileOutput << sum_index << endl;
    }
}