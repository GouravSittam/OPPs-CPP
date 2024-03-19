#include<iostream>
using namespace std;
void swap(int* x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
int x=7,y=24;
swap(&x,&y);
cout<<"The value of x is: "<<x<<endl<<"The value of y is: "<<y;
	return 0;
}
