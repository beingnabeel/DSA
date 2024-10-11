// #include <iostream>
// using namespace std;
// int fun(int n){
// 	if(n>0)
// 	{
// 		return fun(n-1)+ n;

// 	}

// 	return 0;
// }
// int main()
// {
// 	int x=5;
// 	cout<<fun(x)<<endl;

// 	return 0;
// }
// using static variables
// #include <iostream>
// using namespace std;
// int fun(int n)
// {
// 	static int x=0;
// 	if(n>0)
// 	{
// 		x++;
// 		return fun(n-1)+x;

// 	}
// 	return 0;
// }
// int main()
// {
// 	int a=5;
// 	cout<<fun(a)<<endl;

// 	return 0;
// }

// using global variables
#include <iostream>
using namespace std;
int x=0;
// the above variable is global variable x
int fun(int n)
{
	// static int x=0;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;

	}
	return 0;
}
int main()
{
	int a;
	a=fun(5);

	cout<<a<<endl;

	a=fun(5);
	cout<<a<<endl;

	return 0;
}