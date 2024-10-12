#include <iostream>
using std::cin;
using std::cout;

// void display()
// {
// 	cout<<"Hello";

// }
// int main()
// {
// 	display();
// 	return 0;
// }


// funtion prog. to add 2 num.  
// float add (float x, float y)
// {
// 	float z;
// 	z=x+y;
// 	return z;

// }

// int main()
// {
// 	float x=2.3, y=7, z;
// 	z=add(x,y);
// 	cout<<z<<"\n";
// 	return 0;
// }

// funtion to print the maximum of three numbers

int maxim(int a, int b, int c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;

}

int main()
{
	int x=10, y=15, z=5, r;
	r=maxim(x,y,z);
	cout<<r<<"\n";
	return 0;

}