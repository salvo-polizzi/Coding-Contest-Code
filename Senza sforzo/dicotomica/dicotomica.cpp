#include<iostream>
#include<fstream>
#include<cmath>


using namespace std;


int binarySearch(int arr[], int dim, int val) {
    bool found = false;
    int numOfAccess = 0;

    int start = 0;
    int end = dim-1;
    while(start!=end && !found) {
        int midpoint = floor((start + end)/2);

        if(arr[midpoint]==val) {
            found = true;
            numOfAccess++;
        }else if(arr[midpoint]>val) {
            end = midpoint;
            numOfAccess++;
        }else {
            start = midpoint + 1;
            numOfAccess++;
        }

        /*if(start==end && !found)
            numOfAccess++;*/
    }

    
    return numOfAccess;
}



int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    
    for(int i=0; i<100; i++) {
        int dim;
        input >> dim;

        int arr[dim];
        for(int j=0; j<dim; j++) {
            input>>arr[j];
        }

        int key;
        input >> key;

        int numOfAccess = binarySearch(arr, dim, key);
        output << numOfAccess << endl;
    }

}