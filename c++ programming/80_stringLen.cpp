#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="hello";
	int count=0;
	// string::iterator it;

	// for(it=str.begin(); it!=str.end(); it++)
	// 	count++;
	for(int i=0; str[i]!='\0'; i++)
		count++;
	cout<<"The count of the string is "<<count<<endl;
	
	return 0;
}
