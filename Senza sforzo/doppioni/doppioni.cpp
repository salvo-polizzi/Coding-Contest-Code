#include<iostream>
#include<fstream>

using namespace std;


void deleteDoppioni(int* arr, int n, int doppione) {
    for(int i=0; i<n; i++) {
        if(arr[i]==doppione){
            //cout << "Impongo a 0 il numero in posizione: " << i << endl;
            arr[i]=0;
        }
    }
    //cout << endl << endl;
}



int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int numberOfComics;
        input >> numberOfComics;

        int nemoComics[numberOfComics];
        for(int j=0; j<numberOfComics; j++) {
            input >> nemoComics[j];
        }

        int countDoppioni=0;
        for(int j=0; j<numberOfComics; j++) {
            if (nemoComics[j] != 0) {
                for (int z = j + 1; z < numberOfComics; z++) {
                    if(z==numberOfComics)
                        cout << "z=" << numberOfComics;

                    if (nemoComics[j] == nemoComics[z])
                        countDoppioni++;
                }
                deleteDoppioni(nemoComics, numberOfComics, nemoComics[j]);
            }
        }
        output << countDoppioni << endl;
        //cout << countDoppioni << endl;
    }
}