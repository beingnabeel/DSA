#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int a=10;
	int *p;
	p=&a;

	cout<<a<<" \n";  
	cout<<&a<<" \n";  
	cout<<p<<" \n";  
	cout<<&p<<" \n";  
	cout<<*p<<" \n";  


	return 0;
}