#include <iostream>
#include <vector>
using namespace std;
// void fun(vector<int> &v)
// {
// 	v.push_back(10);
// 	v.push_back(20);
// }
// by writing cont it make sures that the funciton doesn't accidently modifies the vector
void fun(const vector<int> &v)
{
	for(int x:v)
		cout<<x<<" ";
}
int main()
{
	vector<int> v{5, 7, 8};
	fun(v);
	// for(int x:v)
	// 	cout<<x<<" ";
	return 0;
}

// if you are doing passing by function for only efficiency
 