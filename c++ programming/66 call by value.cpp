#include <iostream>
using std::cin;
using std::cout;

void swap(int a, int b)
{
	cout<<a<<" "<<b<<"\n";
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<"\n";

}

int main()
{
	int x=10, y=20;
	swap(x,y);
	cout<<x<<" "<<y<<"\n";


	return 0;

}