#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char s[30];
    ofstream fileout;
    fstream file;
    fileout.open("hello.txt", ios::out);
    fileout << "Hello World to the programming";
    fileout.close();
    file.open("hello.txt", ios::in | ios::out);
    cout << "File get pointer position: " << file.tellg() << endl;
    cout << "File put pointer position: " << file.tellp() << endl;
    file.seekp(9);
    file.seekg(14);
    cout << "File get pointer position after seek: " << file.tellg() << endl;
    cout << "File put pointer position after seek: " << file.tellp() << endl;
    file >> s;
    cout << "Read from file: " << s << endl;
    file.close();
    return 0;
}

