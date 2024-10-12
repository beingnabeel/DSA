#include <iostream>
using namespace std;
class Complex{
private: 
	int real;
	int img;
public:
	Complex(int r=0, int i=0)
	{
		real = r;
		img = i;
	}
	friend Complex operator+(Complex c1, Complex c2);
	friend ostream & operator<<(ostream &o, Complex &c);

};

Complex operator+(Complex c1, Complex c2){
	Complex t;
	t.real = c1.real + c2.real;
	t.img = c1.img + c2.img;
	return t;
}

ostream & operator<<(ostream &o, Complex &c){
	o<<c.real<<" + i"<<c.img<<endl;
	return o;
}
int main()
{ 
	Complex x(3, 4), y(2, 3), z;
	z = x+y;
	cout<<z;
	cout<<x;


	return 0;
} 