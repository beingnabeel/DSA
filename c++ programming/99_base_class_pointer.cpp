#include <iostream>
using namespace std;
class Base{
public:
	void fun1(){
		cout<<"fun1 of base. "<<endl;
	}
};
class Derived: public Base{
public:
	void fun2(){
		cout<<"fun2 of derived. "<<endl;
	}
};
int main()
{
	// Derived d;
	// d.fun1();
	// d.fun2();
	// base class pointer and derived class object

	Base *ptr;
	Derived d;
	ptr=&d;

	ptr->fun1();
	// ptr->fun2();
	


	return 0;
}