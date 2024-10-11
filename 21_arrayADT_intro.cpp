#include <iostream>
using namespace std;
class Array{
public:
	int *A;
	// the above is an integer type pointer which can point to the array.
	int size;
	int length;
	void Display(Array arr){
		cout<<"Elements are : "<<endl;
		for(int i=0; i<arr.length; i++)
		{
			cout<<arr.A[i]<<" ";
		}
		cout<<endl;
	}

};
int main()
{
	Array arr;
	int n;
	cout<<"Enter size of the array: ";
	cin>>arr.size; //here we are taking the size of the array

	arr.A=new int[arr.size];
	arr.length=0;

	cout<<"Enter the number of numbers: ";
	cin>>n;

	for(int i=0; i<n; i++)
		cin>>arr.A[i];

	arr.length=n;

	// // for accessing the array
	// for(int i=0; i<n; i++)
	// 	cout<<arr.A[i]<<" ";
	// cout<<endl;

	arr.Display(arr);

	return 0;
}