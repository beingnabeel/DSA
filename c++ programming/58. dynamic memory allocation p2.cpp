#include <iostream>
using std::cin;
using std::cout;

int main()
{
	// creating variable sized array inside stack;
	int size;
	cout<<"enter the size of the element : ";
	cin>>size;

	// int A[size];
	// cout<<sizeof A<<"\n";
	// size=35;  this is not possible, for this we need dynamic memory allocation

	int *p=new int[size];
	cout<<sizeof p<<"\n";
	delete []p;


	cout<<"\nEnter new size \n";
	cin>>size;
	p=new int[size];
	cout<<"\n"<<sizeof p<<"\n";

	return 0;

}
