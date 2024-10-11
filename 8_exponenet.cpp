#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
// int expo(int m, int n){
// 	if(n==0)
// 		return 1;
// 	else
// 		return expo(m,n-1)*m;
// }
// opoptimized function in case of number of multiplication
int expoOptimized(int m, int n){
	if(n==0)
		return 1;
	else if(n%2==0)
		return expoOptimized(m*m,n/2);
	else
		return m*expoOptimized(m*m,(n-1)/2);
}

// iterative version
// int iPower(int m, int n){
//     int temp=m;
//     for(int i=1; i<n; i++){
//         m *= temp;
//     }

//     return m;
// }
int main()
{
	int m=2, n=9;
	int res;
	// res=expo(m,n);
	res=expoOptimized(m,n);

	cout<<res<<endl;

	return 0;
}
