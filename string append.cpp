#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char s[30];

    ofstream fileout("data", ios::app);

    if (!fileout.is_open()) {
        cout << "Failed to open the file for writing." << endl;
        return 1; 
    }

    fileout << "hello world";

    fileout.close();

    ifstream filein("data", ios::in);

    if (!filein.is_open()) {
        cout << "Failed to open the file for reading." << endl;
        return 1; 
    }

    filein.getline(s, 30);

    filein.close();

    cout << s << endl;

    return 0; 
}

