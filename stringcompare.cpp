#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Jay";
    string s2 = "Asad";
    cout<<s1.compare(s2)<<endl;
    cout << s2.compare(2,2,s2,5,2)<< endl;
    return 0;
}

