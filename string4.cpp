#include<iostream>
#include<string>
using namespace std;
int main(){
	string s="Welcome";
	cout<<"Size: "<<s.size()<<endl;
	cout<<"length: "<<s.length()<<endl;
	cout<<"max size: "<<s.max_size()<<endl;
	cout<<"Empty: "<<(s.empty() ? "Yes" : "No")<<endl;
}
