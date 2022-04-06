#include<iostream>
#include<fstream>
#include<climits>
#include<string>
#include<sstream>

using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int minore;
        fileInput >> minore;
        string fermati = "STOP";
        stringstream ss;

        bool found = false;
        while(!found) {
            string attuale;
            fileInput >> attuale;
            //cout << attuale << endl;
            
            if(attuale != fermati) {
                int actual;
                ss << attuale;
                ss >> actual;
                ss.clear();
                //cout<< "Numero: " << actual << endl; 
                if(actual<minore){
                    minore = actual;
                    //cout << "Nuovo minore" << endl;
                }
            }else{
                found = true;
                //cout << "Ciclo while finito"<<endl;
            }
        }

        fileOutput << minore << endl;
    }
}