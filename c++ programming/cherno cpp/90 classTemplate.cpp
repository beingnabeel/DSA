#include <iostream>
using namespace std;
template <typename T>
struct Pair
{
	T x;
	T y;
	Pair(T i, T j)
	{
		x=i;
		y=j;

	}
	T getfirst();
	// {
	// 	return x;

	// }
	T getsecond()
	{
		return y;
	}

	
};
// you can define the functionality of getfirst outside the class also
template<typename T>
T Pair<T> ::getfirst()
{
	return x;
}

int main()
{
	Pair<int>p1(10,20);
	cout<<p1.getfirst()<<" "
		<<p1.getsecond();

	return 0;

}