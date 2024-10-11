#include <iostream>
using namespace std;
class UTMatrix{
private:
	int n;
	int *A;

public:
	UTMatrix(int n){
		this->n=n;
		A=new int[n*(n+1)/2];
	}
	~UTMatrix(){
		delete []A;
	}

	void Display(bool row=true);
	void setRowMajor(int i, int j, int x);
	void setColumnMajor(int i, int j, int x);
	int getRowMajor(int i, int j);
	int getColumnMajor(int i, int j);
	int getN(){
		return n;
	}
};
void UTMatrix::setRowMajor(int i, int j, int x) {
    if (i <= j) {
        int index = (i - 1) * n + (j - 1) - ((i - 2) * (i - 1)) / 2;
        A[index] = x;
    }
}

void UTMatrix::setColumnMajor(int i, int j, int x) {
    if (i <= j) {
        int index = (j - 1) * j / 2 + (i - 1);
        A[index] = x;
    }
}

int UTMatrix::getRowMajor(int i, int j){
	if(i<=j){
		int index = (i - 1) * n + (j - 1) - ((i - 2) * (i - 1)) / 2;
		return A[index];
	}else{
		return 0;
	}
}

int UTMatrix::getColumnMajor(int i, int j){
	if(i<=j){
		int index = (j - 1) * j / 2 + (i - 1);
		return A[index];
	}else{
		return 0;
	}
}

void UTMatrix::Display(bool row){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
		{
			if(i<=j){
				if(row){
					cout<<getRowMajor(i, j)<<" ";
				}else{
					cout<<getColumnMajor(i, j)<<" ";
				}
			}else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}


int main(){
	UTMatrix rm(4);
	rm.setRowMajor(1, 1, 1);
	rm.setRowMajor(1, 2, 2);
	rm.setRowMajor(1, 3, 3);
	rm.setRowMajor(1, 4, 4);
	rm.setRowMajor(2, 2, 5);
	rm.setRowMajor(2, 3, 6);
	rm.setRowMajor(2, 4, 7);
	rm.setRowMajor(3, 3, 8);
	rm.setRowMajor(3, 4, 9);
	rm.setRowMajor(4, 4, 10);
	rm.Display();
	cout<<endl;

	UTMatrix cm(4);

	cm.setColumnMajor(1, 1, 1);
	cm.setColumnMajor(1, 2, 2);
	cm.setColumnMajor(1, 3, 3);
	cm.setColumnMajor(1, 4, 4);
	cm.setColumnMajor(2, 2, 5);
	cm.setColumnMajor(2, 3, 6);
	cm.setColumnMajor(2, 4, 7);
	cm.setColumnMajor(3, 3, 8);
	cm.setColumnMajor(3, 4, 9);
	cm.setColumnMajor(4, 4, 10);

	cm.Display(false);
	return 0;
}