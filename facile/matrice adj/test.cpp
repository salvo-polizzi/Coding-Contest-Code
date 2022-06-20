#include <iostream>
using namespace std;

int main() {
    string ciao = "ciao bello";
    string ciao1 = ciao.substr(0, ciao.find(" "));
    string ciao2 = ciao.substr(ciao.find(" ") + 1);

    cout << "ciao1: " << ciao1 << ", ciao2: " << ciao2 << endl;
}