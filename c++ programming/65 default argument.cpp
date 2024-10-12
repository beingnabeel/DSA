#include <iostream>
using std::cin;
using std::cout;

int sum(int a, int b, int c=0)
{
	return a+b+c;
}

// function for providing the larger of the numbers
int max(int a=0, int b=0, int c=0)
{
	return a>b && a>c ? a: (b>c?b:c);
}

int main()
{
	cout<<sum(10,5)<<"\n";
	cout<<sum(10,5,5)<<"\n";

	// the max of the numbers
	cout<<max()<<"\n";
	cout<<max(10)<<"\n";
	cout<<max(10,13)<<"\n";
	cout<<max(10,13,15)<<"\n";

	return 0;
}
