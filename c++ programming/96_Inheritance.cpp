#include <iostream>
using namespace std;
class base{
public:
	int x;
	void show(){
		cout<<x<<endl;
	}
};

class derived:public base{
public:
	int y;
	void display(){
		cout<<x<<" "<<y<<endl;
	}
};

int main()
{
	base b;
	b.x = 25;
	b.show();
	derived d;
	d.x = 10;
	d.y = 15;
	d.show();
	d.display();

	return 0;
}