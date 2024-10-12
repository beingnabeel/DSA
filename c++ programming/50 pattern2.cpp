#include <iostream>

using std::cin;
using std::cout;

int main()
{
	/* to draw the pattern 
	*
	**
	***
	****
	*/

	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if (i>=j)
			{
				cout<<"*";
			}
			
		}
		cout<<"\n";
	}

	cout<<"\n";
	cout<<"\n";
	cout<<"\n";
	cout<<"\n";

	// inverted pattern

	for (int i=0; i<4; i++)
	{
		for (int j=0; j<4; j++)
		{
			if (i<=j)
				cout<<"*";
			else
				cout<<" ";
			
		}
		cout<<"\n";
	}


	return 0;

}