#include <iostream>
using namespace std;
class Rectangle{
private:
	int length;
	int breadth;

public:
	Rectangle();
	Rectangle(int l, int b);
	Rectangle(Rectangle &r);
	int getLength(){
		return length;
	}
	int getBreadth(){
		return breadth;
	}
	void setLength(int l);
	void setBreadth(int b);
	int area();
	int perimeter();
	bool isSquare();
	~Rectangle();

};

Rectangle::Rectangle(){
	length=1;
	breadth=1;
}
Rectangle::Rectangle(int l, int b){
	setLength(l);
	setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r){
	length = r.length;
	breadth = r.breadth;
}
void Rectangle::setLength(int l){
	if(l>=0)
		length=l;
	else
		length=1;
}
void Rectangle::setBreadth(int b){
	if(b>=0)
		breadth=b;
	else
		breadth=1;
}
int Rectangle::area(){
	return length*breadth;
}
int Rectangle::perimeter(){
	return 2*(length+breadth);
}
bool Rectangle::isSquare(){
	if(length == breadth)
		cout<<"the object is a square"<<endl;
	else
		cout<<"The object is a rectangle with length "<<length<<" and breadth equal "<<breadth<<endl;

}
Rectangle::~Rectangle(){
	cout<<"Rectangle is destroyed"<<endl;
}

int main()
{
	Rectangle r1(10, 10);
	cout<<"Area "<<r1.area()<<endl;

	if(r1.isSquare())
		cout<<"yes"<<endl;


	return 0;
}

