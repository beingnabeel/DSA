#include <iostream>
using namespace std;
int main()
{
	int i, n, sum=0;

	cout<<"Enter the number of terms : ";
	cin>>n;

	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	// we can also calculate the sum of first 5 natural nos. as n*(n+1)/2.

	cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl;

	return 0;
}