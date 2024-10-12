// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	int a, b, c;

// 	cout<<"Enter the values of a, b, and c respectively : ";
// 	cin>>a>>b>>c;

// 	if (a>b && a>c)
// 	{
// 		cout<<a<<" is the greatest number.";

// 	}
// 	else
// 	{
// 		if (b>c)
// 		{
// 			cout<<b<<" is the greatest number.";
// 		}
// 		else
// 		{
// 			cout<<c<<" is the greatest number.";
// 		}
// 	}


// 	return 0;
// }
#include <iostream>
#include <math.h>
int main()
{
	int a, b, c;
	std::cout<<"Enter the numbers a, b, and c : "<<std::endl;
	std::cin>>a>>b>>c;

	if (a>b && a>c)
		std::cout<<a<<" is the greatest number."<<std::endl;
	else if(b>c)
		std::cout<<b<<" is the greatest numbrt."<<std::endl;
	else
		std::cout<<c<<" is the greatest number."<<std::endl;


	return 0;
}