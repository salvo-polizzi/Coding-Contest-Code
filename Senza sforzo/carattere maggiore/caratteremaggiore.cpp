#include<iostream>
#include<fstream>
#include<cctype>

using namespace std;


int countChar(string s, char a) {
    int count = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]==a)
            count++;    
    }
    return count;
}


void removeChar(string& s, char a) {
    for(int i=0; i<s.length(); i++) {
        if(s[i]==a)
            s.erase(i,1);
    }
}


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    string line;
    while(getline(input,line)) {
        int countFinale=0;
        char charFinale;
        for(int i=0; i<line.length(); i++) {
            
            if(isalpha(line[i])) {
                int countTemp = countChar(line, line[i]);
                char charTemp = line[i];
                if (countTemp > countFinale) {
                    countFinale = countTemp;
                    charFinale = charTemp;
                }
                else if (countTemp == countFinale && charTemp > charFinale) {
                    charFinale = charTemp;
                }

                removeChar(line, line[i]);
            }
            
        }

        output << charFinale << " " << countFinale << endl;
    }
}