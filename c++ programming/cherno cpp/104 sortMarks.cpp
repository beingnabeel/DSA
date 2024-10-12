#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
// implementation using array of pairs
// void sortMarks(int a[], int b[], int n)
// {
// 	pair<int,int> rollmarks[n];
// 	for (int i = 0; i <n; i++)
// 	{
// 		rollmarks[i]={b[i],a[i]};
// 	}
// 	sort(rollmarks,rollmarks+n);
// 	for(int i=(n-1); i>=0; i--)
// 	{
// 		cout<<rollmarks[i].second<<" "<<rollmarks[i].first<<endl;
// 	}


// }

// int main()
// {
// 	int roll[]={101,10,103,105};
// 	int marks[]={70,80,40,90};

// 	int n=4;
// 	sortMarks(roll, marks, n);


// 	return 0;
// }

// implementation using vector of pairs
// int mycmp(pair<int,int> p1, pair<int,int> p2)
// {
// 	int no;
// 	if(p1.second>p2.second)
// 		no=p1.second;
// 	else
// 		no=p2.second;

// 	return no;

// }
// void printSortedByMarks(int roll[], int marks[], int n)
// {
// 	vector<pair<int,int>> v;
// 	for(int i=0; i<n; i++)
// 		v.push_back({roll[i],marks[i]});
// 	sort(v.begin(),v.end(),mycmp);
// 	// usually the values are sorted in sort funtion using the first value but we are passing the second value using our mycmp function.
// 	for(int i=0; i<n; i++)
// 	{
// 		cout<<v[i].first<<" "<<v[i].second<<endl;
// 	}

// }
// int main()
// {
// 	int roll[]={101, 103, 105};
// 	int marks[]={80, 70, 90};
// 	int n=3;
// 	printSortedByMarks(roll, marks, n);


// 	return 0;
// }
// alternate implementation
void printSortedByMarks(int roll[],int marks[], int n)
{
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++)
		v.push_back({marks[i],roll[i]});
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	for(int i=0; i<n; i++)
	{
		cout<<v[i].second<<" "<<v[i].first<<endl;

	}
}
int main()
{
	int roll[]={101, 103, 105};
	int marks[]={80, 70, 90};
	int n=3;
	printSortedByMarks(roll, marks, n);


	return 0;
}