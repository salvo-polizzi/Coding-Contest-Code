#include "converting.h"
#include <fstream>



int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);


    for(int i=0; i<100; i++) {
        string numOfPol;
        getline(input, numOfPol, '(');

        int numOfPolinomi = stoi(numOfPol);
        string polinomio;
        getline(input, polinomio, ')');
        //cout << "Polinomio: " << polinomio << endl;

        Polinomio sum = getListaMonomi(polinomio);
        //cout << "sum converted=" << sum << endl;
        for (int j = 0; j < numOfPolinomi - 1; j++) {
            
            string operatore;
            getline(input, operatore, '(');


            string firstPol;
            getline(input, firstPol, ')');

            Polinomio first = getListaMonomi(firstPol);

            //cout << first << endl;
            if(operatore.find("+") != string::npos)
                sum = sum + first;
            else {
                sum = sum - first;
            }
        }
        output << sum << endl;
    }
}