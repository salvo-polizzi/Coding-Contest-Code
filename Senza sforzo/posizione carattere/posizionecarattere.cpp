#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);


    string line;
    char toSearch;
    while(getline(input,line, ' ') || getline(input,line,'\n')) {
        
        char temp = toSearch;
        string actual=line;


        cout << temp << endl;

        if(line.length()==1) {
            toSearch = line[0];
            continue;
        }else if(line.find("\n")==line.length()-2) {
            toSearch = line[line.length()-1];
            actual = line.substr(0,line.length()-2);
        }

        
        bool found = false;
        
        //cout << actual << endl;
        for(int i=0; i<actual.length(); i++) {
            
            if(line[i]==temp) {
                found = true;
                output << i << " ";
            }
        }

        if(line.find("\n")==line.length()-2) {        
            if(!found)
                output<< "none";
            output << endl;
        }
            
         
    }
}