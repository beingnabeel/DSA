// program to check if the number is perfect number or not.
#include <iostream>
using namespace std;
int main()
{
	int n, sum=0;

	cout<<"Enter the number to check if perfect number or not? : ";
	cin>>n;

	for(int i=1; i<n; i++)
	{
		if (n%i==0)
		{
			sum += i;

		}

	}

	if (sum == n)
				cout<<n<<" is a perfect number .";
	else
		cout<<n<<" is not a perfect number.";


	return 0;
	
	
}