// keeping indexes of the pairs in vectors
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
void printSortedByIndexes(int arr[], int n)
{
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++)
	{
		v.push_back({arr[i],i});
	}
	sort(v.begin(),v.end());
	
	for(auto x:v)
		cout<<x.first<<" "<<x.second<<endl;

}
int main()
{
	int arr[]={20,10,5,40};
	// int n=(end(arr)-begin(arr));
	int n=sizeof(arr)/sizeof(arr[0]);
	printSortedByIndexes(arr, n);


	return 0;
}