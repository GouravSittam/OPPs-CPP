#include<iostream>
#include<fstream>
using namespace std;

int main(){
char s[200];
ofstream fileout;
ifstream filein;
fileout.open("dataa.txt",ios::app);
fileout<<"hello world";
fileout.close();
filein.open("dataa.txt",ios::in);
filein.getline(s,30);
cout<<s;
	return 0;
}
