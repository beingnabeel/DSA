#include <iostream>
using namespace std;
class test{
private:
	int a;
	int b;
public:
	static int count;
	test(){
		a=10;
		b=10;
		count++;
	}
	static int getCount(){
		return count;
	}
}; 
int test::count=0;

int main(){
	cout<<test::getCount()<<endl;
	test t1;
	cout<<t1.getCount()<<endl;
	cout<<test::getCount()<<endl;


	return 0;
}