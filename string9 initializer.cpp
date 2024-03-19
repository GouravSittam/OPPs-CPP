#include<iostream>
using namespace std;
class rect{
	int l,b;
	public:
		rect(int x,int y):l(x),b(y){}
		int area()
		{
			return (l*b);
		}
};
int main(){
	rect r(12,34);
	cout<<"Area is "<<r.area();
	return 0;
}
