#include <iostream>

void fun()
{
	static int v=0;
	int a=5;
	v++;
	std::cout<<a<<" "<<v<<"\n";

}

int main()
{
	fun();
	fun();
	fun();

	return 0;
}