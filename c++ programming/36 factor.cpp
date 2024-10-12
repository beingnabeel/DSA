program to find the factor of a given number.

#include <iostream>
using namespace std;
int main()
{
	int n;

	cout<<"Enter the number for which you want the factor : ";
	cin>>n;

	cout<<"\n The factor of "<<n<<" is as follows : ";
	for(int i=1; i<=n; i++)
	{
		if (n % i == 0)
		cout<<i<<" ";

	}

	return 0;
}
