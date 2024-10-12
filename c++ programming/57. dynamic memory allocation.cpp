#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int *p = new int[5];
	p[0]=12;
	p[1]=15;

	cout<<p[0]<<" "<<p[1]<<"\n";

	delete []p;
	p=nullptr;

	return 0;

}