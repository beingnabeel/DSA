#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"Menu\n";
	cout<<"1.Add\n"<<"2.Substract\n"<<"3.Multiply\n"<<"4.Divide\n";

	int option;
	cout<<"Enter your option. : ";
	cin>>option;

	int a, b, c;
	cout<<"Enter two numbers : ";
	cin>>a>>b;

	switch(option)
	{
		case 1: c=a+b;
		break;

		case 2: c=a-b;
		break;

		case 3: c=a*b;
		break;

		case 4: c=a/b;
		break;

		default : cout<<"invalid operation entered."<<endl;

	}

	cout<<"The result of your selected option is "<<c<<endl;

	return 0;

}