#include <iostream>
using namespace std;

class Innova{
public:
	static int price;
	static int getPrice(){
		return price;
	}
};

int Innova::price=20;

int main()
{
	Innova i1, i2, i3;
	cout<<Innova::getPrice()<<endl;
	cout<<i1.getPrice()<<endl;
	cout<<i2.getPrice()<<endl;
	cout<<i3.getPrice()<<endl;
	cout<<Innova::price<<endl;


	return 0;
}