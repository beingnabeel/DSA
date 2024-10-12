#include <iostream>
using namespace std;

bool isprime(int n)
{
  if(n==1)
    return false;
  if(n==2 || n==3)
    return true;
  if(n%2==0 || n%3==0)
    return false;
  for(int i=5; i*i<=n; i=i+6)
  {
    if(n%i==0 || n%(i+2)==0)
      return false;
  }
  return true;

}
int main()
{
  int x;
  cout<<"enter the number : ";
  cin>>x;

  if(isprime(x))
    cout<<x<<" is a prime number. \n";
  else
    cout<<x<<" is not a prime number. \n";


  return 0;
}
// The reason why we are incrementing i by 6 in the for loop of the isprime function is because we can skip checking multiples of 2 and 3.

// The loop starts with i = 5, which is the first odd number greater than 3. The loop condition i*i <= n ensures that we only check factors up to the square root of n.

// Inside the loop, we first check if n is divisible by i, which is an odd number. If n is not divisible by i, we then check if n is divisible by i+2, which is the next odd number after i. This is because if n is not divisible by i, then it cannot be divisible by any even multiple of i, which would be 2i, 3i, etc.

// By incrementing i by 6 in the for loop (i=i+6), we ensure that we only check every other odd number. This is because the only odd numbers we need to consider as potential factors are those of the form 6k+1 and 6k+5 (where k is a non-negative integer), since all other odd numbers are either multiples of 2 or 3.

// If i is of the form 6k+1, then i+2 is of the form 6k+3, which is a multiple of 3 and therefore not a potential factor. If i is of the form 6k+5, then i+2 is of the form 6k+7, which is greater than n and therefore not a potential factor.

// Skipping multiples of 2 and 3 in this way can significantly reduce the number of potential factors we need to check, making the isprime function more efficient.