#include <iostream>
using namespace std;
class base{
public:
	void Display(){
		cout<<"Display of Parent. "<<endl;
	}
};
class derived:public base{
public:
	void Display(){
		cout<<"Display of child."<<endl;
	}
};
int main()
{
	base b;
	derived d;
	b.Display();
	d.Display();


	return 0;
}