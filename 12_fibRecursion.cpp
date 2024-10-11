// #include <iostream>
// using namespace std;
// int fib(int n){
// 	if(n==0)
// 		return 0;
// 	else if(n==1)
// 		return 1;
// 	else
// 		return fib(n-2)+fib(n-1);
// }
// int main()
// {
// 	int res;
// 	res=fib(7);
// 	cout<<res<<endl;

// 	return 0;
// }
#include <iostream>
using namespace std;
int fib(int n){
    int t0=0, t1=1, sum=0;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    {
        for(int i=2; i<=n; i++)
        {
            sum=t0+t1;
            t0=t1;
            t1=sum;

        }
        return sum;
    }

}
int main()
{
    int res;
    res=fib(7);
    cout<<res<<endl;


    return 0;
}