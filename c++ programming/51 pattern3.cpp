#include <iostream>

using std::cin;
using std::cout;

int main()
{

	// cross diagonal pattern
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if ((i+j)>=3)
				cout<<"*";
			else
				cout<<" ";
		}
	cout<<"\n";

	}

	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";

	
// inverted cross diagonal
 for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if ((i+j)<=3)
				cout<<"*";
			else
				cout<<" ";
		}
	cout<<"\n";

	}


	return 0;
}