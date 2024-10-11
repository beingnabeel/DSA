#include <iostream>
using namespace std;
class Diagonal{
private:
	int *A;
	int n;

public:
	Diagonal(){
		n=2;
		A=new int[2];
	}
	Diagonal(int n){
		this->n=n;
		A=new int[2];
	}

	void create();
	void set(int i, int j, int x);
	int get(int i, int j);
	~Diagonal();
	void Display();
};
Diagonal::~Diagonal(){
	delete []A;
}
void Diagonal::create(){
	int x;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>x;
			if(i==j)
				A[i-1]=x;
		}
	}
}

void Diagonal::set(int i, int j, int x){
	if(i==j)
		A[i-1]=x;
}
int Diagonal::get(int i, int j){
	if(i==j)
		return A[i-1];
	else
		return 0;
}

void Diagonal::Display(){
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(i==j)
				cout<<A[i-1]<<" ";
			else
				cout<<"0 "; 
		}
		cout<<endl;
	}
}

int main()
{
	int d, op;
	cout<<"Enter dimensions : ";
	cin>>d;
	Diagonal dm(d);
	do{
		cout<<"Enter option : \n1. create \n2. set \n3. get \n4. Display \n5. exit"<<endl;
	    cin>>op;
	    switch(op){
	    case 1:{
	    	dm.create();
	    	break;
	    }
	case 2: {
		int i, j;
		cout<<"Enter the indexes i and j : ";
		cin>>i>>j;
		dm.get(i, j);
		break;
	    }

	case 3: {
		int i, j, x;
		cout<<"Enter the indexes i and j and the element x"<<endl;
		cin>>i>>j>>x;
		dm.set(i, j, x);
		break;
	}
case 4: dm.Display();
		break;
	}
	}while(op != 5);
	


	return 0;

}
 