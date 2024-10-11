#include <iostream>
using namespace std;
int main(){
	int A[5] = {2, 4, 6, 8, 10};
	cout<<A[2]<<endl;

	for(int i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;

	cout<<*(A+2)<<endl;

	return 0;
}