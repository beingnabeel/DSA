#include <iostream>
using namespace std;
// double e(int x, int n){
// 	double s=1;
// 	for(int i=n; i>0; i--){
// 		s=1+(x/i)*s;
// 	}

// 	return s;
// }
double e(int x, int n)
{
	static double s;
	if(n==0)
		return s;
	s=1+x*s/n;
	return e(x, n-1);
}

int main()
{
	int m=1, n=10;
	double res;
	res=e(m,n);
	cout<<res<<endl;

	return 0;
}