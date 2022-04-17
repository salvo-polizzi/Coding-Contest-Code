#include<iostream>
#include<fstream>

using namespace std;


//Impongo a 0 i doppioni già trovati
void deleteDoppioni(int* arr, int n, int doppione) {
    for(int i=0; i<n; i++) {
        if(arr[i]==doppione){
            arr[i]=0;
        }
    }
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
            if (nemoComics[j] != 0) { //Non devo entrare nel ciclo se il numero è 0, poiche è un doppione
                for (int z = j + 1; z < numberOfComics; z++) {
                    if (nemoComics[j] == nemoComics[z])
                        countDoppioni++;
                }
                deleteDoppioni(nemoComics, numberOfComics, nemoComics[j]);
            }
        }
        output << countDoppioni << endl;
    }
}