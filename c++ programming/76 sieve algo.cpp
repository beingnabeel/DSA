#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void sieve(int n)
{
  vector<bool> isPrime(n+1, true);
  for(int i=2; i<=n; i++)
  {
    if(isPrime[i])
    {
      
      for(int j=i*i; j<=n; j=j+i)
        isPrime[j]=false;
      cout<<i<<" ";
    }
  }
}
int main()
{
  int x=20;
  sieve(x);

  return 0;
}