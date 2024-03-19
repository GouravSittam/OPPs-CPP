#include<iostream>
using namespace std;

	struct employee
	{
		char name[50];
		int age;
		int salary;
	};
	
int main()
{
	employee e1;
	cout<<"Enter Full Name: ";
	cin.getline(e1.name, 50);
	cout<<"Enter age: ";
	cin>>e1.age;
	cout<<"Enter salary: ";
	cin>>e1.salary;
	cout<<endl<<"\nDisplaying Information\n"<<endl;
	cout<<"\nName: "<<e1.name;
	cout<<"\nAge: "<<e1.age;
	cout<<"\nSalary: "<<e1.salary;
	return 0;
}
