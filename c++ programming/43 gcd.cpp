#include <iostream>
using namespace std;
int main()
{
	int n, m;

	cout<<"Enter two numbers : ";
	cin>>m>>n;

	while (m != n)
	{
		if (m>n)
			m = m-n;
		else if (n>m)
			n = n-m;


	}

	if (m == n)
	{
		cout<<"The gretest common divisor of the two numbers is : "<<m<<endl;


	}
			// cout<<"The gretest common divisor of the two numbers is : "<<m<<endl;


	return 0;
}