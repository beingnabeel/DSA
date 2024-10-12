#include <iostream>
using namespace std;
int main()
{
	int A[5]={3, 5, 6, 7, 4};

	int max=A[0], min=A[0];

	for(int i=0; i<5; i++)
	{
		if (max < A[i])
			max=A[i];
		if (min > A[i])
			min=A[i];

	}


	cout<<"the maximum of the number is : "<<max<<endl;
	cout<<"the minimum of the number is : "<<min<<endl;

	return 0;

}