#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//Metodo checkPalindroma per controllare se la stringa è palindroma o quasi palindroma
bool checkPalindroma(string s) {
    bool isPalindrom = false;
    string pal;
    for(int i=s.length()-1; i>=0; i--) { //Creo la stringa inversa
        pal+=s[i];
    }

    //Se sono uguali la stringa è palindroma
    if(pal == s) {
        isPalindrom = true;
    }else { //Controllo se la stringa è quasi palindroma
        int i=0;
        int countDifferentChar = 0;
        while(i<pal.length()) {
            if(s[i]!=pal[i]) {
                pal[i]=s[i];
                countDifferentChar ++;
                if(countDifferentChar == 2 && pal == s) {
                    isPalindrom = true;
                    break;
                }
               
            }
            i++; 
        }
    }
    return isPalindrom;
}



int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        input >> length;

        int countPalindrome = 0;
        string palindrome[length];
        int k=0;
        for(int j=0; j<length; j++) {
            string strInput;
            input >> strInput;
            if(checkPalindroma(strInput)) {
                countPalindrome++;
                palindrome[k++]=strInput;
            }
        }

        output << countPalindrome << " ";
        for(int j=0; j<countPalindrome; j++) {
            output << palindrome[j] << " ";
        }
        output << endl;
    }
}