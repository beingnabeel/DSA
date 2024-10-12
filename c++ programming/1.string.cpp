#include <iostream>
#include <string.h>
using namespace std;

int main()
{
//    program to display the factorial of a number.
	int n;
	cout<<"enter the number ";
	cout<<endl;
	cin>>n;
	int fact =1;
	for(int i=1; i<=n; i++){
		fact *= i;
	}
	cout<<"the factorial of the number "<<n<<"is "<<fact<<endl;
	

    return 0;

}
