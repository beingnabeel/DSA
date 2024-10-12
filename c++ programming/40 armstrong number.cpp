// program to check whether a no. is armstrong or not.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, sum=0, r, m;

	cout<<"Enter the number : ";
	cin>>n;

	m=n;

	while(n>0)
	{
		r = n%10;
		n = n/10;
		sum = sum + round(pow(r, 3));
		// cout<<sum<<" ";

	}

	if (sum == m)
		cout<<m<<" is a armstrong number.";
	else
		cout<<m<<" is not an armstrong number.";

	return 0;
}
