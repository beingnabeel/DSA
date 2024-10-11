#include <iostream>
using namespace std;
class Array{
public:
	int A[20];
	int size;
	int length;

	void Display(Array arr){
		cout<<"Elements are : ";
		for(int i=0; i<arr.length; i++)
			cout<<arr.A[i]<<" ";
		cout<<endl;
	}
};
int main()
{
	Array arr = {{2, 4, 6, 8, 10}, 20, 5};
	arr.Display(arr);

	return 0;
}