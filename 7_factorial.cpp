#include <iostream>
using namespace std;
// int product=1;
// int fac t(int n)
// {
// 	if(n>0){
// 		product *= n;
// 		fact(n-1);
// 	}

// 	return product;
// }
int fact(int n){
	if(n == 0)
		return 1;
	else
		return fact(n-1)*n;
}

int main()
{
	int res;
	res=fact(10);

	cout<<res<<endl;

	return 0;
}
// iterative version
// int main()
// {
//     int product=1;
//     for(int i=1; i<=5; i++)
//     {
//         product *= i;

//     }


//     cout<<product<<endl;

//     return 0;
// }