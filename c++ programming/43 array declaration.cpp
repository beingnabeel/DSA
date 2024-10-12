#include <iostream>
using namespace std;
// using std::cin;
// using std::cout;

int main()
{
	int A[5]={2, 4};
	for (int i=0; i<5; i++)
		cout<<A[i]<<endl;
	cout<<"The array using for each loop"<<endl;

	int B[5]={1, 2, 3, 4, 5};
	for(int x:B)
		cout<<++x<<endl;

	cout<<"\n Using the auto keyword."<<endl;

	float C[]={3.4f, 4.5f, 6.1f, 7, 8, };
	for (auto y:C)
		cout<<y<<endl;

	cout<<"\n char literals ."<<endl;
	char D[]={'A', 66, 'C', 68};
	for(auto z:D)
		cout<<z<<endl;

	

	return 0;
}