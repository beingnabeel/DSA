#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int i=0; i<3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<"("<<i<<" "<<j<<"), ";
		}
		cout<<"\n";
	}

	return 0;
}