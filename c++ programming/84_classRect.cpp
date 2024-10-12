#include <iostream>
using namespace std;
class rectangle{
public: 
	int length;
	int breadth;

	int area(){
		return length*breadth;

	}

	int perimeter(){
		return 2*(length+breadth);

	}
};

int main()
{
	rectangle r1, r2;

	r1.length=10, r1.breadth=5;
	r2.length=15, r2.breadth=10;

	cout<<"The area of rectangle one is "<<r1.area()<<endl;
	cout<<"The area of rectangle two is "<<r2.area()<<endl;


	return 0;

}
