#include<iostream>
using namespace std;
void swap(int& first,int& second)
{
	int temp=first;
	first=second;
	second=temp;
}
int main(){
	int a=2;
	int b=3;
	swap(a,b);
	cout<<a<<endl<<""<<b;
	return 0;
}