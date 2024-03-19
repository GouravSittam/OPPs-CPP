#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the elements:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nYour Array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n-1;i++){
		int loc=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[loc]){
				loc=j;
			}
		}
		int temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
		cout<<"\nYour sorted Array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
