#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int fibRec(int n, int &next)
{
	if(n==0)
	{
		next = 1;
		return 0;
	}
	int nb2pl;
	int nb2=fibRec(n/2, nb2pl);
	int a = nb2*(2*nb2pl-nb2);
	int b=nb2pl*nb2pl + nb2*nb2;
	if (n%2 == 0)
	{
		next=b;
		return a;

	}
	else
	{
		next=a+b;
		return b;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, half;
	cin>>n>>half;
	// for (int i=1; i<=n; i++)
	// {B

	// 	int power = pow(i, 2);
	// 	sum += power; 
	// }
	
	cout<<"The value of "<<n<<"fibonacci number is "<<fibRec(n, half)<<"\n";

	return 0;

}
