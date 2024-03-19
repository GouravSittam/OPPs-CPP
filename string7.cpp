#include<iostream>
using namespace std;
int main(){
	string s1 = "welcome";
	cout<< s1.at(5)<<endl;
	cout<< s1.substr(0,4)<<endl;
	cout<< s1.find("co")<<endl;
	cout<< s1.rfind("e")<<endl;
	cout<< s1.find("e")<<endl;
	cout<< s1.find_first_of("e")<<endl;
	cout<< s1.find_last_of("e")<<endl;
	
}

