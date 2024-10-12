#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int maxPF(int n)
{
	int res=-1;
	for (int i=2; i*i<=n; i++)
	{
		while(n%i == 0)
		{
			res = i;
			n=n/i;

		}
	}
	if(n>1)
		res=n;
	return res;
}
int largestPow(int n, int fact)
{
	int p= maxPF(n);
	int res=0;
	while (fact>0)
	{
		fact=fact/p;
		res = res+fact;

	}
	return res;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, fact;
	cin>>n>>fact;
	// for (int i=1; i<=n; i++)
	// {
	// 	int power = pow(i, 2);
	// 	sum += power;
	// }
	
	cout<<"The max power of "<<n<<"dividing the factoial is "<<largestPow(n, fact)<<"\n";

	return 0;

}
 