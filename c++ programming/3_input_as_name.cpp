#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string name;
	cout<<"May I know your name ";
	// cin>>name;
	getline(cin, name);  // to take the full name as an input 
	cout<<"Welcome Mr. "<<name;

	return 0;
}