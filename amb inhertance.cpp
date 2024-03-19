#include<iostream>
using namespace std;

class B1
{
	public:
		show_data()
		{
			cout<<"\nIn the base class 1";
		}
};

class B2
{
	public:
		show_data()
		{
			cout<<"\nIn the base class 2";
		}
};

class D:public B1,public B2
{
	public:
		D()
		{
			cout<<"This class D has inherited from both the classes:";
		}
};
int main(){
	D obj;
	obj.B2::show_data();
	obj.B1::show_data();
return 0;
}
