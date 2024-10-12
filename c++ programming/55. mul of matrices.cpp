#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int a[10][10], b[10][10], mult[10][10], r1, r2, c1, c2, i, j, k;
	cout<<"Enter the rows and coulumn of the first matrix : ";
	cin>>r1>>c1;

	cout<<"Enter the rows and coulumn of the second martrix : ";
	cin>>r2>>c2;

	if(c1!=r2)
	{
		cout<<"matrix cant be multiplied .";
		return 0;
	}

	// storing the elemnts of the first matrix.
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			cout<<"Enter element "<<i+1<<j+1<<"\n";
			cin>>a[i][j];
		}
	}

	// storing the elements of the second matrix
	for(int i=0; i<r2; i++)
	{
		for(int j=0; j<c2; j++)
		{
			cout<<"Enter element "<<i+1<<j+1<<"\n";
			cin>>b[i][j];
		}
	}

	cout<<"displaying the elements stored in matrix one : \n";
	for(int i=0; i<r1; i++)
	{
		for (int j=0; j<c1; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"displaying the elements stored in matrix two : \n";
	for(int i=0; i<r2; i++)
	{
		for (int j=0; j<c2; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\n multiplying the elemtent of the matrix 1 and 2.\n";
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c2; j++)
		{
			mult[i][j]=0;
			for(int k=0; k<r1; k++)
			{
				mult[i][j] = mult[i][j] + a[i][k]*b[k][j];
			}
		}


	}

		// now displaying the mult of matrix

		cout<<"\n displaying the element of the matrix : \n";

		for(int i=0; i<r1; i++)
		{
			for(int j=0; j<c2; j++)
			{
				cout<<mult[i][j]<<" ";

			}
			cout<<"\n";
		}

	return 0;


}