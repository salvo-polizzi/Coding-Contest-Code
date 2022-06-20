#include "polinomioo.h"


Monomio toMonomio(string monomio) {

    if (monomio.find("x") != string::npos) {
        int coefficient;

        if(monomio[0] == 'x') {
            coefficient = 1;
        }else if(monomio.find("-x") != string::npos) {
            coefficient = -1;
        }else if(monomio.find("+x") != string::npos) {
            coefficient = 1;
        }else {
            string coeff = monomio.substr(0, monomio.find("x"));
            cout << coeff << endl;
            coefficient = stoi(coeff);
        }


        if (monomio.find("^") == string::npos) {
            Monomio m(coefficient, 1);
            return m;
        }
        
        
        string esp = monomio.substr(monomio.find("^") + 1);

        
        int esponent = stoi(esp);

        Monomio m(coefficient, esponent);
        return m;
    }

    int coefficient = stoi(monomio);
    Monomio m(coefficient, 0);
    return m;
}


Polinomio getListaMonomi(string polinomio) {
    List<Monomio> monomi;


    if(polinomio.find("+") == string::npos && polinomio.find("-") == string::npos) {
        Monomio m = toMonomio(polinomio);
        monomi.discendingInsert(m); 
        
        Polinomio p(monomi);
        return p;
    }
    

    int index = 0;
    int length = 0;
    for(int i=0; i<polinomio.length(); i++) {
        if(polinomio[i] == '+') {
            length = i - index;
            Monomio m = toMonomio(polinomio.substr(index, length));
            monomi.discendingInsert(m);
            index = i+1;
        }

        if(polinomio[i] == '-' && i>0) {
            length = i - index;
            Monomio m = toMonomio(polinomio.substr(index, length));
            monomi.discendingInsert(m);
            index = i;
        }

        if(i == polinomio.length() - 1) {
            Monomio m = toMonomio(polinomio.substr(index));
            monomi.discendingInsert(m);
        }
    }

    Polinomio p(monomi);

    return p;
}