#include <iostream>

using std::cin;
using std::cout;

int main()
{
	float A[100];
	float sum=0.0, avg;
	int n;
	cout<<"Enter the number of elements : \n";
	cin>>n;

	cout<<"Enter the numbers in the array : \n";
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<" enter number: ";
		cin>>A[i];
		sum+=A[i];

	}

	avg=sum/n;

	cout<<"\n The average of the no. of the array are : "<<avg;

	return 0;



}