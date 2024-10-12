// program to reverse the digits of a number 
#include <iostream>
using namespace std;
int main()
{
	int n, r;

	cout<<"enter the number : ";
	cin>>n;

	cout<<"The digits in the reverse order is : ";
	while (n!=0)
		{
			r= n%10;
			n= n/10;
			cout<<r<<" ";
		}


		return 0;


}