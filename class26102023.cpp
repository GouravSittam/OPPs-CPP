#include<iostream>
using namespace std;

class birthday
{
	int data,month,year;
	public:
		birthday(int d, int m, int y)
		{
			data=d;
			month=m;
			year=y;
			cout<<"birthday constructor"<<endl;
		}
		~birthday()
		{
		cout<<"birthday destructor"<<endl;
		}
		void display()
		{
			cout<<data<<"/"<<month<<"/"<<year<<endl;
		}
};

class person
{
	string name;
	birthday b;
	public:
		person(string n, int d, int m, int y):b(d,m,y)
		{
			name=n;
			cout<<"Person constructor"<<endl;
		}
		void show()
		{
			b.display();
			cout<<name<<endl;
		}
		~person()
		{
		cout<<"Person destructor"<<endl;
		}
};

int main()
{
	person ob("abc",12,10,2023);
	ob.show();
	return 0;
}
