#include <bits/stdc++.h>
#include <math.h>
using namespace std;
vector<long long> prime;
void Sieve(int n)
{
	vector<bool> isPrime(n+1, true);
	for(long long i=2; i<=n; i++)
	{
		if (isPrime[i])
		{
			prime.push_back(i);
			for(long long j=i*i; j<=n; j++)
				isPrime[j]=false;

		}
	}
}

void segSieve(int l, int h)
{
	long long sq=sqrt(h);
	Sieve(sq);
	vector<bool> isPrime(h-l+1, true);
	for(long long p:prime)
	{
		long long sm=(l/p)*p;
		if(sm<l)
			sm+=p;
		for(long long m=sm; m<=h; m+=p)
			isPrime[m-l]=false;

	}
	for(long long i=l; i<=h; i++)
	{
		if(isPrime[i-l] == true)
			cout<<i<<" ";
	}
}

int main()
{
	long long l=5, h=9;
	segSieve(l, h);


	return 0;
}