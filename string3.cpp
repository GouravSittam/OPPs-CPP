#include<iostream>
#include<string>
using namespace std;
int main(){
	string 	s="Australia";
	s.insert(3,"nzl");
	cout<<s<<endl;
	s.erase(3,3);
	cout<<"The original is: "<<s<<endl;
	
	return 0;
}

