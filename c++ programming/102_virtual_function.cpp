#include <iostream>
using namespace std;
class base{
public:
	virtual void fun(){
		cout<<"fun of base."<<endl;
	}
};
class derived: public base{
public:
	void fun(){
		cout<<"fun of derived."<<endl;

	}
};
int main()
{
	// base *p;
	// derived d;
	// p=&d;
	// short form of the above thing

	base *p=new derived();

	p->fun();


	return 0;
}