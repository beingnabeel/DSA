#include <iostream>
using std::cin;
using std::cout;

int main()
{
	// adding two matrices ...they will be added if the dimension are same and corresponding elements will be added

	int a, b, c, d;
	cout<<"enter the dimension of matrix 1 and matrix 2 respectively : ";
	cin>>a>>b>>c>>d;

	int A[a][b];
	int B[c][d];


	cout<<"enter the elements of matrix 1 : "<<"\n";
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			cin>>A[a][b];
		}
	}

	cout<<"\n enter the elements of matrix 2 : ";
	for (int i=0; i<c; i++)
	{
		for (int j=0; j<d; j++)
		{
			cin>>B[c][d];
		}
	}

	if (a==c && b==d)
	{
		int sum[a][b];
		cout<<"matrix addition is posiible. \n";
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				sum[i][j]=A[i][j]+B[i][j];
			}
		}

		cout<<"\n the resultant matrix is : \n";
		for (int i=0; i<a; i++)
		{
			for (int j=0; j<b; j++)
			{
				cout<<sum[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	else
		cout<<"the addition of the matrix is not possible; ";



	return 0;



}