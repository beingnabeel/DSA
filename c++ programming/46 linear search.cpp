#include <iostream>
using namespace std;
int main()
{
	int A[10], n=10, key;

	cout<<"Enter the elements of the array : ";
	for (int i=0; i<n; i++)
		cin>>A[i];

	cout<<"\nThe elements of the array entered by the user are : ";
	for (auto x:A)
		cout<<x<<" ";

	cout<<"\n Enter the Key : ";
	cin>>key;

	for (int i=0; i<n; i++)
	{
		if (key == A[i])
		{
			cout<<"Element found at index "<<i;
			return 0;
		}
	}
	cout<<"\nElement not found. "<<endl;



	return 0;
}