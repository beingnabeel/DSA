#include <iostream>

int x=10;
// this global variable in never be accesible inside the main funtion

int main()
{
	int x=20;
	{
		int x=30;
		std::cout<<x<<"\n";
	}
	std::cout<<x<<"\n";

	return 0;
}