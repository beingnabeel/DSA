#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;

	cout<<"Enter the values of a and b : ";
	cin>>a>>b;

	if (b==0)
	{
		cout<<"invalid denominator !";
	}
	else
	{
		c=a/b;
		cout<<c<<endl;
	}

	return 0;
}