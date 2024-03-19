#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v1(10);
//	vector<int>v1; zero size vector
cout<<"Size is\t"<<v1.size()<<"\n";
for(int i=0;i<9;i++)
{
	v1[i]=i;
}
for(int i=10;i<=9;i++)
{
v1.push_back(i);	
}

cout<<"size is\t"<<v1.size()<<"\n";
for(int i=0; i<=19; i++)
{
	cout<<v1[i]<<"\t";
}
v1.pop_back();
v1.pop_back();
cout<<"\nNew size of the vector."<<v1.size();
vector<int>::iterator v=v1.begin();
while(v!=v1.end())
{
	cout<<"\nValuen of v = "<<*v;
	v++;
}
return 0;
}


//Size is 10
//size is 10
//0       1       2       3       4       5       6       7       8       0       -2070758605     10420   7756320 0      7733584  0       0       4032    204     0
//New size of the vector.8
//Valuen of v = 0
//Valuen of v = 1
//Valuen of v = 2
//Valuen of v = 3
//Valuen of v = 4
//Valuen of v = 5
//Valuen of v = 6
//Valuen of v = 7
