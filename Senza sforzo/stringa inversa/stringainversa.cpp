#include<iostream>
#include<fstream>
#include<string>


using namespace std;

//Funzione Ricorsiva per la stringa inversa
string inversa(string s, string& newString, int& count) { // Il count dovrà essere pari all'indice dell'ultimo carattere della stringa
    if(count < 0)
        return newString;
    else {
        newString += s[count];
        count--;
        return inversa(s, newString, count);
    }
}



int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        input >> length;

        int tempCount1 = length-1, tempCount2 = length-1, tempCount3 = length-1;

        string temp1, temp2, temp3;
        input >> temp1 >> temp2 >> temp3;

        string firstInversa = inversa(temp1, firstInversa, tempCount1);
        string secondInversa = inversa(temp2, secondInversa, tempCount2);
        string thirdInversa = inversa(temp3, thirdInversa, tempCount3);


        //cout << temp1 << " " << temp2 << " " << temp3 << endl;
        //cout << firstInversa << " " << secondInversa << " " << thirdInversa << endl << endl;
        output << firstInversa << " " << secondInversa << " " << thirdInversa << endl;

        firstInversa.clear();
        secondInversa.clear();
        thirdInversa.clear();
    }
}