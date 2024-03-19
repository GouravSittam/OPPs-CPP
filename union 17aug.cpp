#include<iostream>
using namespace std;

	union employee
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
	cout<<endl<<"\nDisplaying Information\n"<<endl;

	cout<<"\nName: "<<e1.name<<endl;

	cout<<"Enter age: ";
	cin>>e1.age;
	cout<<"\nAge: "<<e1.age<<endl;

	cout<<"Enter salary: ";
	cin>>e1.salary;
	cout<<"\nSalary: "<<e1.salary<<endl;

	
	return 0;
}
