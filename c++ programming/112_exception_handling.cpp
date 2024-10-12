#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=10, b=0, c;
	try{
		if(b==0)
			throw 1;
		c=a/b;
		cout<<c;
	}catch(int e){
		// cout<<"Division by zero. "<<endl;
		cout<<"Division by zero. "<<"Error code: "<<e<<endl;
	}
	cout<<"bye"<<endl;
	return 0;
}