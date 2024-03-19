#include<iostream>
using namespace std;

class Student
{
	public:
	int rollno;
	string name;
	static int cnt;
	Student()
	{
	   rollno=++cnt;
	}
	 void getData()
	 {
      cout<<"enter name"<<endl;
      cin>>name;
	 }
	 static void meth1()
	 {
	 	cout<<"This is Static method"<<endl;
	 	cout<<"Total objects created are: "<<cnt<<endl;
	 }

};

    int Student:: cnt=0;

    int main()
    {
    	Student s1;
    	Student s2;
    //	Student s3;
    	Student s[5];
    	cout<<s1.rollno<<endl;
    	cout<<s2.rollno<<endl;
    	//cout<<s3.rollno<<endl;
    	for (int i=0; i<5; i++)
    	{
    		s[i].getData();
    		cout<<s[i].rollno<<" ";
		}

    	Student::meth1();
    return 0;
    }


