#include <iostream>
using namespace std;
int main()
{
	char A[]="Painter";
	char B[]="Painter";
	// if you want to check the string considering the cases
	// first convert both the string to upper or lower case.
	int i, j;
	for(i=0, j=0; A[i]!='\0' && B[j]!='\0'; i++, j++)
	{
		if(A[i]!=B[j])
			break;

	}
	if(A[i]==B[j])
		cout<<"Equal"<<endl;
	else if(A[i]<B[j])
		cout<<"Smaller"<<endl;
	else
		cout<<"greater"<<endl;

	return 0;
}