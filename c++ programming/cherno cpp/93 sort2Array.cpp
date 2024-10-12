#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
	int a[]={10, 15, 5};
	char b[]={'X', 'Y', 'Z'};
	int n=3;
	pair<int,char> pa[n];
	for(int i=0; i<n; i++)
	{
		pa[i]={a[i], b[i]};
	}
	sort(pa, pa+3);

	for(int i=0; i<n; i++)
	{
		cout<<pa[i].second<<" ";
	}


	return 0;
}