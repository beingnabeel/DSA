#include <iostream>
using std::cin;
using std::cout;

int * fun()
{
	// int x=10;
	// return &x;  here we cant return the address of x becoz as the function executes and ends its variable memory gets deallocated so it cant return the address of variable x.
	// so instead we will create an array in the heap memory.
	int *p = new int[5];
	for(int i=0; i<5; i++)
	{
		p[i]=5*i;
	}
	cout<<p<<"\n";
	return p;
	// now it will return the address which is allocated in the heap memory.

}

int main()
{
	int *q=fun(); //now the address of the p will be stored in q;
	cout<<q<<"\n";
	for(int i=0; i<5; i++)
	{
		cout<<q[i]<<"\n";
	}


	return 0;

}