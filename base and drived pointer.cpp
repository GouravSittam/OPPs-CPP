#include<iostream>
 using namespace std; 
 class BC
{

public:

	void printBC()

	cout<<"\nPrinting message in base class"<<endl; }

	void show(){
		cout<<"\nshow() of base class"<<endl;
	}

};

class DC:public BC
{
	public:

		void printDC(){
			cout<<"\nPrinting message in derived class"<<endl;
			}
		void show(){
		cout<<"\nshow() of derived class"<<endl;

}
};
