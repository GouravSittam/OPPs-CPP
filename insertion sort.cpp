#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\nYour Array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0 && temp<=a[j]){
			a[j+1]=a[j];
			j=j-1;
		}
			a[j+1]=temp;
		}
		cout<<"\nYour sorted Array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
