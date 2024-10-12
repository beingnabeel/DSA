// program to find maximum of two numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;

	cout<<"Enter two numbers : ";
	cin>>a>>b;

	if (a>b){
		cout<<a<<" is the greater number.";
	}
	else{
		cout<<b<<" is the greater number.";
	}

	return 0;
}