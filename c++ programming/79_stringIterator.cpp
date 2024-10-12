#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string str="today";
	// string::iterator it;
	string::reverse_iterator it;
	// for(it=str.begin(); it!=str.end(); it++)
	// {

	// 	// cout<<*it;
	// 	// for changing the letter to uppercase letters
	// 	*it=*it-32;
	// }
	// for(it=str.rbegin(); it!=str.rend(); it++)
	// 	cout<<*it;
	// // cout<<str;
	// cout<<endl;
	// displaying letter using for loop
	for(int i=0; str[i]!='\0'; i++)
	{

		// cout<<str[i];
		// for displaying the letter in capital
		str[i]=str[i]-32;
	}
	cout<<str;
	cout<<endl;

	
	

	return 0;
}