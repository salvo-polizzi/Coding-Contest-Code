#include<iostream>
#include<fstream>

using namespace std;


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);

    for(int i=0; i<100; i++) {
        int length;
        input >> length;

        string subsequence;
        input >> subsequence;

        for(int j=0; j<length; j++) {
            string temp;
            input >> temp;

            if(temp.find(subsequence)!=string::npos) {
                output << temp << " ";
            }
        }

        output << endl;
    }
}