#include <iostream>
using namespace std;
int main()
{
	int A[10]={6, 8, 13, 17, 20, 22, 25, 28, 30, 35}, n=10, l, h, key, mid;

	cout<<"Enter low and high of the array : ";
	cin>>l>>h;

	cout<<"\nEnter the key : ";
	cin>>key;

	while(l<=h)
	{
		mid = (l+h)/2;
		if (key == A[mid])
		{
			cout<<"\nElement found at index "<<mid<<endl;
			return 0;
		}
		else if(key<A[mid])
			h = mid-1;
		else
			l = mid+1;

	}
	cout<<"\nElement not found."<<endl;



	return 0;




}