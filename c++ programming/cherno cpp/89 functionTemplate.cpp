#include <iostream>
using namespace std;
template <typename T>
T arrMax(T arr[], int n)
{
	T res=arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>res)
			res=arr[i];
	}
	return res;
}

int main()
{
	int arr[]={20, 30, 10, 40, 35, 43, 23, 34};
	int x=8;
	cout<<"the max element of the array is "<<arrMax<int>(arr, x)<<endl;


	return 0;
}