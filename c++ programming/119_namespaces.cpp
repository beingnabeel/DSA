#include <bits/stdc++.h>
using namespace std;
namespace first{
	void fun(){
		cout<<"first"<<endl;
	}
}
namespace second{
	void fun(){
		cout<<"second"<<endl;
	}
}
using namespace first;
int main(){
	// first::fun();
	// second::fun();
	fun();
	second::fun();
	return 0;
}