#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main() {
    fstream fileInput("input.txt", fstream::in);
    fstream fileOutput("output.txt", fstream::out);
    for(int i=0; i<100; i++){
        char good,bad;
        fileInput >> good >> bad;
        //cout << good << " " << bad;
        for(int j=0; j<3; j++){
            int lenght=0;
            string names="";
            fileInput >> lenght >> names;
            //cout << lenght << " " << names;
            if (names[0] == good && names[lenght-1]!=bad){
                fileOutput << names << " ";
            }else if(names[lenght-1]==good && names[0]!=bad ){
                fileOutput << names << " ";
            }
        }
        fileOutput << endl;
    }
}