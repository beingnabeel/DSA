// program to find the sum of first n natural numbers 
#include <iostream>
using namespace std;
int main()
{
	float n, sum_natural_nos;
	cout<<"Enter the number of terms : ";
	cin>>n;

	sum_natural_nos = (n*(n+1))/2;

	cout<<"The sum of first n natural numbers is "<<sum_natural_nos<<endl;

	return 0;
}