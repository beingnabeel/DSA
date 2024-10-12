// program to reverse a digit and make it a number. and also to check whether the number is pelindrone or not.
#include <iostream>
using namespace std;
int main()
{
	int n, r, m, rev=0;

	cout<<"Enter the number : ";
	cin>>n;
	m=n;

	while (n>0)
	{
		r = n%10;
		n = n/10;
		rev = rev*10 + r;

	}

	cout<<"The reverse of the number is : "<<rev<<endl;

	if (m == rev)
		cout<<"The above number is pelindrone."<<endl;
	else
		cout<<"The above number is not pelindrone."<<endl;



	return 0;

}