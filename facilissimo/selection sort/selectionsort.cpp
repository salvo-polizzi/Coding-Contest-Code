#include<iostream>
#include<fstream>


using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a=b;
    b=temp;
}


void printArray(int array[], int n) {
    for(int i=0; i<n; i++) {
        cout << array[i] << "\t" ;
    }
    cout << endl;
}

int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);



    for(int i=0; i<100; i++) {
        int length;
        fileInput >> length;

        int array[length];
        for (int t = 0; t < length; t++) {
            fileInput >> array[t];
        }

        int sum_index = 0;
        for(int j=0; j<length; j++) {
            int indexMin = j; 
            for(int z=j+1; z<length; z++) {
                if(array[z]<array[indexMin]){
                    indexMin=z;
                }
            }
            sum_index+=indexMin-j;
            swap(array[j], array[indexMin]);
            //printArray(array,length);
        }
        //printArray(array,length);
        fileOutput << sum_index << endl;
    }
}