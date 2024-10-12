#include <iostream>
using std::cin;
using std::cout;

int main()
{
	// for accesing the elements of 2D array

	int A[2][3] = {{2, 5, 9L}, {6, 9, 15}};

	for (int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";		
	}

	return 0;
}