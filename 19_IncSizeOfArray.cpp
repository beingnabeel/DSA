#include <iostream>
using namespace std;
int main()
{
	int *p, *q;
	p=new int[5];
	q=new int[10];
	p[0]=2;
	p[1]=4;
	p[2]=6;
	p[3]=8;
	p[4]=10;
	for(int i=0; i<5; i++)
		q[i]=p[i];
	delete []p;
	p=q;
	q=nullptr;

	for(int i=0; i<5; i++)
		cout<<p[i]<<" ";
	cout<<endl;
	

	return 0;

}