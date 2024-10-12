// program to print the digits of a number in words
#include <iostream>
using namespace std;
int main()
{
	int n, r, rev=0;

	cout<<"Enter the number : ";
	cin>>n;

	while(n>0)
	{
		r = n%10;
		n = n/10;
		rev = rev * 10 + r;
	}

		// cout<<rev<<" ";

	n = rev;
	rev = 0;

	cout<<"\n The number in words  : ";
	while (n>0)
	{
		r = n%10;
		n = n/10;
		rev = rev * 10 + r;
		// cout<<rev<<" ";
		switch (r)
		{
		case 1: cout<<"One ";
		break;
		case 2: cout<<"Two ";
		break;
		case 3: cout<<"Three ";
		break;
		case 4: cout<<"Four ";
		break;
		case 5: cout<<"Five ";
		break;
		case 6: cout<<"Six ";
		break;
		case 7: cout<<"Seven ";
		break;
		case 8: cout<<"Eight ";
		break;
		case 9: cout<<"Nine ";
		break;
		default: cout<<"INvalid.";


		}

	}


	return 0;
}