// program to print the multiplicatin table of a given number.
#include <iostream>
using namespace std;
int main()
{
	int i=1, n;

	cout<<"Enter the number: ";
	cin>>n;

	do
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		i++;
	}while(i<=10);

	return 0;
}

// same above program is written below with the help of while and for loop as well.

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int i=1, n;

// 	cout<<"Enter the number : ";
// 	cin>>n;

// 	while (i<=10)
// 	{
// 		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
// 		i++;
// 	}

// 	return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	int i, n;
// 	cout<<"Enter the number for which you want the table : ";
// 	cin>>n;

// 	for (i=1; i<=10; i++)
// 	{
// 		cout<<n<<" * "<<i<<" = "<<n*i<<endl;

// 	}

// 	return 0;
// }