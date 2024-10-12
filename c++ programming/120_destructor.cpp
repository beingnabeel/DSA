#include <bits/stdc++.h>
using namespace std;
class test{
public:
	test(){
		cout<<"test created"<<endl;
	}
	~test(){
		cout<<"test destroyed. "<<endl;
	}
};

int main(){
	test t;

	return 0;
}