#include <iostream>

int &fun(int &x)
{
	return x;

}
int main()
{
	int a=10;
	fun(a)=25;
	std::cout<<a<<"\n";


	return 0;
}