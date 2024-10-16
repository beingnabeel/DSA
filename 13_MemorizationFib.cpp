#include <iostream>
using namespace std;
const int MAX = 100;
int F[MAX];
void initializeMemo() {
    for (int i = 0; i < MAX; i++) {
        F[i] = -1;
    }
}
    
int fib(int n){

	if(n<=1){
		F[n]=n;
		return n;
	}else{
		if(F[n-2] == -1)
			F[n-2]=fib(n-2);
		if(F[n-1] == -1)
			F[n-1]=fib(n-1);
	
		return F[n-2]+F[n-1];
	}
}
int main()
{
	int res;
	initializeMemo();
	res=fib(10);
	cout<<res<<endl;

	return 0;
}