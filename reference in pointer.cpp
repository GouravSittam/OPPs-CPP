#include<iostream>
using namespace std;
int main(){
	int x=10;
	int& ref=x;               //ref is a reference of x.
	ref=20;                   //value of x now change to 20.
	cout<<"x:"<<x<<'\n';      
	x=30;                     //value of x is now change to 30.
	cout<<"ref:"<<ref<<'\n';
	return 0;
}
