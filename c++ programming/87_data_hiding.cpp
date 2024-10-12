#include <iostream>
using namespace std;
class Rectangle{
private:
	int length;
	int breadth;
public:
	int getLength(){
		return length;
	}

	int getBreadth(){
		return breadth;
	}

	void setLength(int l){
		if(l>0)
			length=l;
		else
			length=0;
	}

	void setBreadth(int b){
		if(b>0)
			breadth=b;
		else
			breadth=0;
	}

	int area(){
		return length*breadth;
	}

	int perimeter(){
		return 2*(length+breadth);
	}


};

int main()
{
	Rectangle r;
	r.setLength(10);
	r.setBreadth(-5);

	cout<<"The length and breadth of the rectangle is "<<r.getLength()<<" and "<<r.getBreadth()<<endl;

	cout<<"the area is "<<r.area()<<endl;
	cout<<"The perimeter is "<<r.perimeter()<<endl;


	return 0;
}