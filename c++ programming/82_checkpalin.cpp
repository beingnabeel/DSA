#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1="gfg";
	string str2;

	string::reverse_iterator it;
	for(it=str1.rbegin(); it!=str1.rend(); it++)
	{
		str2[it]=*it;
	}
	cout<<str2<<endl;
	if(str1 == str2)
		cout<<"palindrone"<<endl;
	else
		cout<<"Not palindrone"<<endl;

	// string str1="ghg";
	// string str2;

	// string::iterator it;
	// for(it=str1.rbegin(); it!=str1.rend(); it++)
	// {
	// 	str2[it]=*it;

	// }
	// cout<<str2<<endl;
	// if(str1 == str2)
	// 	cout<<"Palindrone"<<endl;
	// else
	// 	cout<<"Not Palindrone"<<endl;

	return 0;
}