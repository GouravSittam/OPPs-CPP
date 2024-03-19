#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter teh values of a and b: "<<endl;
	cin>>a;
	cin>>b;
	int x=a-b;
	try{
		if(x!=0){
			cout<<"Result(a/x)= "<<a/x;
		}
		else{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"exception caught: x= "<<x;
	}
	cout<<endl;
	return 0;
}
