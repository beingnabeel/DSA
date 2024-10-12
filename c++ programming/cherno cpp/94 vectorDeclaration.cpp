#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=3, x=10;
	vector<int> v(n,x);
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<(*it)<<" ";
	return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	vector<int> v{10, 5, 20};
// 	for(int x:v)
// 		cout<<x<<" ";
// 	// for(int &x:v)
// 	// 	x=6;
// 	// for(int x:v)
// 	// 	cout<<x<<" ";
// 	return 0;
// }

// another way of initializing and traversing the vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
// 	vector<int> v;
// 	v.push_back(10);
// 	v.push_back(5);
// 	v.push_back(20);
// 	for(int i=0; i<v.size(); i++)
// 	{
// 		// cout<<v[i]<<" ";
// 		cout<<v.at(i)<<" ";
// 		// this v.at(i) checks of ArrayIndexOutOfBound exception
// 	}


// 	return  0;
// }