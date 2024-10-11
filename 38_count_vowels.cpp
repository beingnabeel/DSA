#include <iostream>
using namespace std;
int main(){
	char A[]="How are you";
	int i;
	int vcount=0, ccount=0, lcount=0, wcount=1;
	for(i=0; A[i]!='\0'; i++)
	{
		if(A[i]=='A' || A[i]=='E' || A[i] == 'I' || A[i]=='O' || A[i] == 'U' || A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
			vcount++;
		else if((A[i]>=65 && A[i]<=90) || A[i]>=97 && A[i]<=122)
			ccount++;
		else if(A[i]==' ' && A[i-1]!=' ')
			wcount++;
	}

	lcount=vcount+ccount;

	cout<<"The no. of vowels present here are: "<<vcount<<endl;
	cout<<"Consonants count are : "<<ccount<<" and letter count are "<<lcount<<endl;
	cout<<"The number of words present are : "<<wcount<<endl;


	return 0;
}