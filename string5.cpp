#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="jjay";
	string s2="asadd";
	cout<<s1.find("ja")<<endl;
	cout<<s2.rfind("sa")<<endl;
	cout<<s2.find_last_of("a");
	return 0;
}
