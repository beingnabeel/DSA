#include <iostream>
using namespace std;
class Rectangle{
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
	Rectangle *p;

	p=new Rectangle;

	Rectangle *q=new Rectangle;

	p->length=15;
	p->breadth=10;
	cout<<"area of p "<<p->area()<<endl;

	q->length=10;
	q->breadth=5;
	cout<<"area of q "<<q->area()<<endl;


	return 0;


}