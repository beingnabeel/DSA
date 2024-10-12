#include <iostream>
// when a variable is located in some function then it is accesible there only there fore it has only a local scope
int g=10;

void fun()
{
	int a=20;
	// int g=30; here this local g will be modified because compiler always look for the nearest scope

	a++;
	g++;
	std::cout<<a<<" "<<g<<"\n";
	// variables in c++ have block level scope
	
}

int main()
{
	std::cout<<g<<"\n";
	fun();
	std::cout<<g<<"\n";

	return 0;
}