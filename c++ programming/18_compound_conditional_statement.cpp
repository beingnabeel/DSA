// program to specify working and leisure hours
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int hours;
	cout<<"Enter hour : ";
	cin>>hours;
	if(hours>=1 && hours<=24)
	{

	if (hours>=9 && hours<=18)
	{
		cout<<"you are in the working hours";
	}
	else{
		cout<<"you are in the liesure hours";
	}
	}
	else
	{
		cout<<"invalid hour entered !";
	}

	return 0;
}