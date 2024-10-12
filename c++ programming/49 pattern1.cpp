#include <iostream>

using std::cin;
using std::cout;

int main(){
	// to print the values from 1 to 16 int the matrice of 4*4
	int count=1;

	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++){
			cout<<count<<" ";
			count++;
		}
		cout<<"\n";
	}

	return 0;
}