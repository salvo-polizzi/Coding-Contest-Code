#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main(){
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);
    string output;
    for (int i = 0; i < 100; i++) {
        string cognome_1 = "", cognome_2 = "", cognome_3 = "";
        int n = 0;
        fileInput >> n >> cognome_1 >> cognome_2 >> cognome_3;
        if (cognome_1.substr(0, n) == cognome_2.substr(0, n) && cognome_1[n] != cognome_2[n]) {
            fileOutput << cognome_1 << " " << cognome_2;
            if (cognome_1.substr(0, n) == cognome_3.substr(0, n) && cognome_1[n] != cognome_3[n] && cognome_2[n]!=cognome_3[n])
            {
                fileOutput << " " << cognome_3;
            }
            fileOutput << "\n";
        }
        else if (cognome_1.substr(0, n) == cognome_3.substr(0, n) && cognome_1[n] != cognome_3[n]){
            fileOutput << cognome_1 << " " << cognome_3 << "\n";
        }
        else if (cognome_2.substr(0, n) == cognome_3.substr(0, n) && cognome_2[n] != cognome_3[n]){
            fileOutput << cognome_2 << " " << cognome_3;
            fileOutput << "\n";
        }
        else{
            fileOutput << cognome_1 << "\n";
        }
    }
}