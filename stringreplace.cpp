#include<iostream>
#include<string>
using namespace std;
int main(){
	string 	s="Australia";
	s.insert(3,"nzl");
	cout<<s<<endl;
	s.erase(3,3);//erasing
	cout<<"The original is: "<<s<<endl;
	s.replace(1,3,s);//replace
	cout<<"The original is: "<<s<<endl;
	s.append(s,3,2);
	cout<<"The original is: "<<s<<endl;
	
	return 0;
}

