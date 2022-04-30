#include<iostream>
#include<fstream>
#include<string>

using namespace std;


//Funzione Ricorsiva
string deleteVocals(string& s, int& i) {

    string vocali = "aeiou";
    if(i==0) {
        if(vocali.find(s[i])!=string::npos)
            s.erase(i,1);
        return s;
    }
    else if(vocali.find(s[i])!=string::npos) {
        s.erase(i,1);
        i--;
        return deleteVocals(s,i);
    }else {
        i--;
        return deleteVocals(s,i);
    }
}

int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        input >> length;

        int length1=length, length2=length, length3=length;

        string stringa1, stringa2, stringa3;

        input >> stringa1 >> stringa2 >> stringa3;

        string stringa_1 = deleteVocals(stringa1, length1);
        string stringa_2 = deleteVocals(stringa2, length2);
        string stringa_3 = deleteVocals(stringa3, length3);

        output << stringa_1 << " " << stringa_2 << " " << stringa_3 << endl;
    }
}