#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int trailingZero(int n)
{
	int r, count=0;
	bool value = true;
	while(value)
	{
		r=n%10;
		n=n/10;
		if(r == 0)
			count++;
		else
			value = false;
	}

	return count;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	// for (int i=1; i<=n; i++)
	// {
	// 	int power = pow(i, 2);
	// 	sum += power;
	// }
	
	cout<<"The count of trailing zeros in "<<n<<" is "<<trailingZero(n)<<"\n";

	return 0;

}