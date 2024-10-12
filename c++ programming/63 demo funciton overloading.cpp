#include <iostream>
using std::cin;
using std::cout;

int sum(int a, int b)
{
	return a+b;
}

float sum(float a, float b)
{
	return a+b;

}

int sum(int a, int b, int c)
{
	return a+b+c;
}

// the above two funtions are overloaded function.

int main()
{
	cout<<sum(10,5)<<"\n";
	cout<<sum(12.5f,3.4f)<<"\n";
	cout<<sum(10,2,3)<<"\n";

	return 0; 
}