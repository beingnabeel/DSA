#include <iostream>
using namespace std;
class Rectangle{
private:
	int length;
	int breadth;

public:
	Rectangle(int l=0, int b=0){
		setLength(l);
		setBreadth(b);
	}
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

class cuboid:public Rectangle{
private:
	int height;
public:
	cuboid(int l=0, int b=0, int h=0){
		setHeight(h);
		setLength(l);
		setBreadth(b);
	}
	int getHeight(){
		return height;
	}
	void setHeight(int h);
	int volume();
	~cuboid();
};


void Rectangle::setBreadth(int b){
	if(b>=0)
		breadth = b;
	else
		breadth = 1;
}
void Rectangle::setLength(int l){
	if(l>=0)
		length = l;
	else
		length = 1;
}
void cuboid::setHeight(int h){
	if(h>=0)
		height=h;
	else
		height=1;
}
int Rectangle::area(){
	return length*breadth;
}
int Rectangle::perimeter(){
	return 2*(length+breadth);
}
int cuboid::volume(){
	return getLength()*getBreadth()*height;
}
bool Rectangle::isSquare(){
	if(length == breadth)
		cout<<"The object is a square. "<<endl;
}
Rectangle::~Rectangle(){
	cout<<"Rectangle is destroyed. "<<endl;
}
cuboid::~cuboid(){
	cout<<"cuboid is destroyed. "<<endl;
}


int main()
{
	cuboid c(10, 5, 3);
	cout<<c.getLength()<<endl;
	cout<<c.volume()<<endl;
	cout<<c.area()<<endl;



	return 0;
}