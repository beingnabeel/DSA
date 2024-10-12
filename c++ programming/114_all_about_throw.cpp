#include <bits/stdc++.h>
using namespace std;
class myException: public exception{

};
int division(int x, int y)throw(int)
{
	if(y==0)
		throw 1;
	return x/y;
}
int main(){
	int a=10, b=0, c;
	try{
		c=division(a, b);
		cout<<c;
	}catch(int e){
		cout<<"Division by zero "<<"Error code: "<<e;
	}
	cout<<endl;
	cout<<"bye"<<endl;

	return 0;
}