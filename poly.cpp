#include<iostream>
#include<conio.h>

using  namespace std;

class overloading
{
	public:
		int area(int side)
		{
			return (side*side);
		}
		int area(int length, int breadth)
		{
			return (length*breadth);
		}
		float area(float radius)
		{
			return (3.14*radius*radius);
		}
};

int main()
{
	overloading obj1;
	int square, rectangle;
	float circle;
	square=obj1 area(5);
	cout<<"\n Area of square is: "<<rectangle;
	circle=obj1.area(3.4f);
	cout<<"\nArea of Circle is: "<<circle;
	return 0;
}
