#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int *p=NULL;
	p=new int;
	
	if(!p)
	{
		cout<<"\nMemory allocation failure";
		exit(1);
	}
	
	else if(p==NULL)
	{
		cout<<"\nMemory alloctaion failure";
		exit(1);
	}
	else
	{
		cout<<"\nMerory allocated";
		*p=12;
		cout<<"\nInteger value stored is: "<<*p;
		delete p;
		cout<<"\nMemory deallocated";
	}
	return 0;
}
