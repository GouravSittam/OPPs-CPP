#include<iostream>
#include<string>
using namespace std;
int main(){
	string 	s="Australia";
	s.insert(3,"nzl");//inserting
	cout<<s<<endl;
	
	s.erase(3,3);//erasing
	cout<<"The original is: "<<s<<endl;
	
	s.replace(3,2,"India");//replace
	cout<<"The original is: "<<s<<endl;
                                    //	it will replace starting form index 3
									//	total 2 chars with 3rd arguement
	
	s.replace(4,4,"England");//replace
	cout<<"The original value is: "<<s<<endl;
	
	s.append("West indies",6,2);//append
	cout<<"The original is: "<<s<<endl;
	
	s.append("West indies");//append
	cout<<"The original is: "<<s<<endl;
	
	cout<<"Size: "<<s.size()<<endl;
	cout<<"length: "<<s.length()<<endl;
	cout<<"max size: "<<s.max_size()<<endl;
	cout<<"Empty: "<<s.empty()<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
   
