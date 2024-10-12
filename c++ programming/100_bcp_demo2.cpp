#include <iostream>
using namespace std;
class rectangle{
public:
	void area(){
		cout<<"area of rectangle. "<<endl;
	}
};
class cuboid: public rectangle{
public:
	void volume(){
		cout<<"volume of cuboid. "<<endl;
	}
};

int main()
{
	// cuboid c;
	// c.area();
	// c.volume();

	rectangle *r;
	cuboid c;
	r=&c;

	r->area();

	return 0;
}
