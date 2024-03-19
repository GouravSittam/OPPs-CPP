#include<iostream>
using namespace std;
class Test
{
	private:
		int x=10;
	public:
			friend void f1(Test t);
		
};
void f1(Test t)
{
	cout<<t.x<<endl;
}
int main(){
	Test t;
	f1(t);
	return 0;
}
