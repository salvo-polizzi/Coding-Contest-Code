#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int seqlen, pivot;
        input >> seqlen;
        input >> pivot;

        //cout << "La sequenza è lunga: " << seqlen << "e l'elemento pivot è: " << pivot << endl;

        
        int count = 0;
        int arrOfMajor[seqlen];
        int k=1;
        
        for(int j=0; j<seqlen; j++) {
            int attuale;
            input >> attuale;
            if(attuale > pivot) {
                arrOfMajor[k]=attuale;
                k++;
                count++;
            }
        }

        arrOfMajor[0]=count;

        for(int j=0; j<count+1; j++) {
            output << arrOfMajor[j] << " ";
            //cout << arrOfMajor[j] << endl;
        }

        output << endl;
    }
}