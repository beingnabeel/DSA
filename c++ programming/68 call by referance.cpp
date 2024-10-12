#include <iostream>
using std::cin;
using std::cout;

// referance are a nickname to an existing variable.
void swap(int &a, int &b)
{
	cout<<&a<<" "<<&b<<"\n";
	int temp;
	temp=a;
	a=b;
	b=temp;

}

int main()
{
	int x=10, y=20;
	swap(x,y);
	cout<<&x<<" "<<&y<<"\n";
	cout<<x<<" "<<y<<"\n";

	return 0;
}