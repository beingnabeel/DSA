#include <iostream>
#include <cmath>
using namespace std;
// enum week {monday=1, tuesday, wednesday, friday, sataurday, sunday};
int main()
{
	// week day;
	int day;
	cout<<"Enter day number : ";
	cin>>day;

	switch (day)
	{
		case 1: cout<<"today is monday"<<endl;
		break;

		case 2: cout<<"today is tuesday"<<endl;
		break;

		case 3: cout<<"today is wednesday "<<endl;
		break;

		case 4: cout<<"today is thursday"<<endl;
		break;


		case 5: cout<<"today is friday"<<endl;
		break;

		case 6: cout<<"today is saturday"<<endl;
		break;

		case 7: cout<<"today is sunday"<<endl;
		break;		

		default : cout<<"invalid day entered.";


	}
	

	return 0;
}