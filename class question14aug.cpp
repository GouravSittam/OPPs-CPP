#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout <<"Enter number: ";
    cin >> n;
    fstream file;
    file.open("tesst.txt", ios::out); 
    if (!file.is_open())
    {
        cout <<"Failed to open file." << endl;
        return 1;
    }
    for (int i = 1; i <= 12; i++) 
    {
        file << n * i << endl; 
    }
    file.close(); 
    file.open("tesst.txt", ios::in);
    if (!file.is_open())
    {
        cout <<"Failed to reopen file for reading." << endl;
        return 1;
    }
    int output;
    while (file >> output)
    {
        cout << output << endl;
    }
    file.close(); 
    return 0;
}

