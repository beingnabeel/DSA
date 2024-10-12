#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="WELcOME";
	// for(int i=0; str[i]!='\0'; i++)
	// {
	// 	str[i]=str[i]+32;

	// }
	string::iterator it;
	for(it=str.begin(); it!=str.end(); it++)
	{
		if(*it>=65 && *it<=90)
			*it=*it+32;

	}
	cout<<"The new string is "<<str<<endl;

	
	return 0;
}