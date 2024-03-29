#include<iostream>
using namespace std;
template<class T>
T square(T num)
{
	return (num*num);
}

int main()
{
	int num1=3;
	cout<<"\nSquare of "<<num1<<" = "<<square<int>(num1);
	float num2=5.6;
	cout<<"\nSquare of "<<num2<<" = "<<square<float>(num2);
	double num3=123.456;
	cout<<"\nSquare of "<<num3<<" = "<<square<double>(num3);
	return 0;
}



//Square of 3 = 9
//Square of 5.6 = 31.36
//Square of 123.456 = 15241.4
