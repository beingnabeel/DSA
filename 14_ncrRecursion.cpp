#include <iostream>
using namespace std;
int fact(int n){
	if(n == 0)
		return 1;
	else
		return fact(n-1)*n;	
}
int comb(int x, int r)
{
	int t1, t2, t3;
	t1=fact(x);
	t2=fact(r);
	t3=fact(x-r);

	return t1/(t2*t3);
}

int main()
{
	int res;
	res=comb(5,2);
	cout<<res<<endl;

	return 0;
}