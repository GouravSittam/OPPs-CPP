#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int roll_no;
	protected:
		char section[10];
	public:
		void get_rno()
		
	{
		cout<<"\nenter the roll number: ";
		cin>>roll_no;
	}
	void show_rno()
	{
		cout<<"\nRoll no: "<<roll_no;
	}
	
};
class result:
	public student
	{
		private:float fees;
		public:
			void get_data()
			{
				get_rno();
				cout<<"\nEnter the fees: ";
				cin>>fees;
				cout<<"\nEnter the section: ";
				cin>>section;
			}
	    void display()
	    {
	    	show_rno();
	    	cout<<"\nfees: "<<fees;
	    	cout<<"\nsection: "<<section;
		}
	};
	int main()
	{
		result obj1;
		obj1.get_rno();
		obj1.display();
	//	strcpy(obj1.section,"57");
		return 0;
	}


