#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    ifstream input("input.txt");
    fstream output("output.txt", fstream::out);

    string farfallinaIn;
    string vocali = "aeiou";

    while (getline(input, farfallinaIn)) {
        string farfallinaOut;
        string f = "f";
        for (int j = 0; j < farfallinaIn.length(); j++) {
            if (vocali.find(farfallinaIn[j]) != string::npos)
                farfallinaOut += farfallinaIn[j] + f + farfallinaIn[j];
            else
                farfallinaOut += farfallinaIn[j];
        }
        output << farfallinaOut << endl;
    }
}