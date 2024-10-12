#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int age;

	cout<<"Enter your age : ";
	cin>>age;

	if (age>=0)
	{
		if (age>=14 && age<=40)
		{
			cout<<"you are still young"<<endl;


		}
		else
		{
			cout<<"you became old"<<endl;
		}
		if(age<12 || age>50)
		{
			cout<<"Eligible for the offer"<<endl;
		}
		else
		{
			cout<<"Not eligible for the offer"<<endl;
		}
	}
	else
	{
		cout<<"Enter valid number "<<endl;
	}
	return 0;
}