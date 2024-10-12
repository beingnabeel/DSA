#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int A[5]={2,4,6, 8, 10};
	int *p=A, *q=&A[4];
	// while using pointer aritmetic you dont need star.
	// cout<<*p<<"\n";
	// p++;
	// cout<<*p<<"\n";
	// p--;
	// cout<<*p<<"\n";

	// for moving the pointer forward
	// cout<<p<<"\n";
	// cout<<p+2<<"\n";
	// cout<<*p<<"\n";
	// cout<<*(p+2)<<"\n";

	// for(int i=0; i<5; i++)
	// {
	// 	// cout<<A[i]<<"\n";
	// 	// cout<<i[A]<<"\n";
	// 	// cout<<*(A+i)<<"\n";
	// 	cout<<A+i<<"\n";
	// 	// cout<<p+i<<"\n";  so this means that we can also use pointer name in place of array name.

	// } 

	cout<<q-p<<"\n";



	return 0;
}