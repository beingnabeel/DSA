#include <iostream>
using namespace std;

class outer
{
public:
	class inner
	{
	public:
		void Display(){
			cout<<"Display of Inner"<<endl;
		}
	};

	inner i;
};

// #include <bits/stdc++.h>
// using namespace std;
// class outer{
// public:
//     int a=10;
//     static int b;
//     void fun(){
//         i.show();
//         cout<<i.x;
//     }
//     class Inner{
//     public:
//         int x=25;
//         void show(){
//             cout<<"show"<<endl;
//             // cout<<a;
//             cout<<b<<endl;

//         }
//     };
//     Inner i;
// };
// int outer::b=20;
// int main(){
//     outer my;
//     my.fun();
//     // my.show();

//     return 0;
// }