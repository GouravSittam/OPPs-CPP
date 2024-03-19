#include<iostream>
using namespace std;	
int main(){
	int num=10;
	int *ptr;
	ptr=&num;
	cout<<"Address of num: "<<ptr;
	cout<<"\nvalue store in ptr: "<<*ptr;
	int **ptr1;
	ptr1=&ptr;
	cout<<"\nAddress of ptr: "<<ptr1;
	cout<<"\nvalue store in ptr1: "<<**ptr1;
	**ptr1=20;
	cout<<"\nvalue after updation: "<<num;
	cout<<"\nvalue after updation: "<<**ptr1;
	return 0;
}
