// program to find the factorial of a number.

#include <iostream>
using namespace std;
int main()
{
	int i, fact=1, n;

	cout<<"Enter the number for which you want the factorial : ";
	cin>>n;

	for(i=n; i>=1; i--)
	{
		fact *= i;

	}

	cout<<"The factorial of "<<n<<" is "<<fact<<endl;

	return 0;
}