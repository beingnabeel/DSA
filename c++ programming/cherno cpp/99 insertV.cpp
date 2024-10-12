// using insert function in vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v{10,5,20,15};
	vector<int>:: iterator it=v.insert(v.begin(),100);
	v.insert(v.begin()+2,200);
	v.insert(v.begin(),2,300);
	vector<int> v2;
	v2.insert(v2.begin(),v.begin(),v.begin()+2);
	for(int x:v)
		cout<<x<<" ";
	cout<<endl;
	for(auto it=v2.begin(); it!=v2.end(); it++)
		cout<<(*it)<<" ";
	return 0;
}