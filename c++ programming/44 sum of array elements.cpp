#include <iostream>
using namespace std;
int main()
{
	int A[5]={1, 2, 6, 4, 5};
	int sum=0;

	for (int x:A)
		sum=sum+x;

	// for (int i=0; i<5; i++)
	// 	sum += A[i];
	// the above part of for each loop can also be done with the help of for loop.

	cout<<"The sum of the elements is "<<sum<<endl;



	return 0;

}