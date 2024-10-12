// using the front and back function in vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v{10,5,20,15};
	v.pop_back();
	for(int x:v)
		cout<<x<<" ";
	// cout<<v.front()<<" ";
	v.front()=100;
	cout<<v.front()<<" ";
	cout<<v.back()<<endl;
	for(int x:v)
		cout<<x<<" ";
	


	return 0;
}