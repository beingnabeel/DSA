#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int A[2][3]={{2, 2, 2}, {2, 2, 2}};
	int B[2][3]={{2, 2, 2}, {2, 2, 2}};
	int C[2][3];

	// printing the elements of the array before addition

	cout<<"the elements of the array A are : \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <3; j++)
		{
			cout<<A[i][j]<<" ";

		}
		cout<<"\n";
	}


	cout<<"\n The elements of the matrix B are : \n";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <3; j++)
		{
			cout<<A[i][j]<<" ";

		}
		cout<<"\n";
	}

	// now adding the two matrices.

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <3; j++)
		{
			C[i][j]=A[i][j]+B[i][j];

		}
		cout<<"\n";
	}


	// cout<<"\n The addition of the two matrix are : \n";
	// for (int i = 0; i < 2; i++)
	// {
	// 	for (int j = 0; j <3; j++)
	// 	{
	// 		cout<<C[i][j]<<" ";

	// 	}
	// 	cout<<"\n";
	// }

	// displaying the result using for each loop.

	for(auto& x:C)
	{
		for(auto& y:x)
		{
			cout<<y<<" ";
		}
		cout<<"\n";
	}




	return 0;
}