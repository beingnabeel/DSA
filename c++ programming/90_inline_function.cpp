#include <iostream>
using namespace std;
class Test{
public:
	void fun1(){
		cout<<"inline function"<<endl;
	}
	// void fun2();
	// for making fun2 inline function.
	inline void fun2();
};

int main()
{
	Test t;
	t.fun1();
	t.fun2();

	return 0;
}

void Test::fun2(){
	cout<<"non-inline funtion"<<endl;
}