#include<iostream>
#include<string>
using namespace std;

class Box{
	public:
		double length, width, height;
	Box()
	{
		length=width=height=-1;
		cout<<"object Created"<<endl;
	}
	Box(double l, double w, double h)
	{
		length=l;
		width=w;
		height=h;
		cout<<"Object created using parameterized const"<<endl
		;
	}
	Box(double v)
	{
		length=width=height=v;
		cout<<"3rd constructor"<<endl;
	}
	Box(Box &b)
	{
		length=b.length;
	}
	void display()
	{
		cout<<length<<" "<<width<<" "<<height<<endl;
	}
	double getVolume()
	{
		return length*width*height;
	}
};
int main(){
	
Box b;
b.display();
cout<<b.getVolume()<<endl;
Box b1(5.5,12.4,4.8);
b1.display();
cout<<b1.getVolume()<<endl;
Box b2(5.3);
b2.display();
cout<<b2.getVolume()<<endl;
Box b3(b1);
	return 0;
}
