#include <bits/stdc++.h>
using namespace std;
class matrix{
public:
	int A[10];
	int n;

	void set(matrix *m, int i, int j, int x){
		if(i==j)
			this->A[i-1]=x;
	}

	int get(matrix m, int i, int j){
		if(i==j)
			return this->A[i-1];
		else
			return 0;
	}

	void Display(matrix m){
		for(int i=0; i<m.n; i++){
			for(int j=0; j<m.n; j++){
				if(i==j)
					cout<<m.A[i]<<" ";
				else
					cout<<"0 ";
			}
			cout<<endl;
		}
	}
};

int main(){
	matrix m;
	m.n=4;
	m.set(&m, 1, 1, 5);
	m.set(&m, 2, 2, 8);
	m.set(&m, 3, 3, 9);
	m.set(&m, 4, 4, 12);

	cout<<m.get(m, 0, 0);
	cout<<endl;

	m.Display(m);

	return 0;
}