#include <iostream>
using std::cin;
using std::cout;

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;

}

int main()
{
	int x=10, y=20;
	swap(&x,&y);
	// here we are passing the address of x and y in the function call which can only be stored in the pointer variables.
	cout<<x<<" "<<y<<"\n";


	return 0;
}