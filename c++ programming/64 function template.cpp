
#include <iostream>
using std::cin;
using std::cout;

template<class T>

T maxim(T a, T b)
{
	return a>b?a:b;
}

// int maxim(int a, int b)
// {
// 	return a>b?a:b;
// }

// float maxim(float a, float b)
// {
// 	return a>b?a:b;

// }

// instead of writing the above two funciton i can write a single template function which will work in place of both the function

int main()
{
	cout<<maxim(12,14)<<"\n";
	cout<<maxim(12.4f,13.4f)<<"\n";
	cout<<maxim(12.3,54.2)<<"\n";
	// here in the case of template funciton if you are passing the parameter to function then make sure that both the value of the datatype should be same else it would give an error
	

	return 0;
}

