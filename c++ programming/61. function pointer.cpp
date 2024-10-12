#include <iostream>
using std::cin;
using std::cout;

int max(int x, int y)
{
	return (x>y) ? x : y;

}

int min(int x, int y)
{
	return (x<y) ? x : y;
}

int main()
{
	int resultMax, resultMin;
	int (*fp)(int,int);
	fp=max;
	resultMax=(*fp)(10,5);

	cout<<resultMax<<"\n";

	fp=min;
	resultMin=(*fp)(10,5);
	cout<<resultMin<<"\n";



	return 0;
}