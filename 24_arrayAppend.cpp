#include <iostream>
using namespace std;
class Array{
public:
	int A[10];
	int size;
	int length;
	// here we have passed the array to get the actual length of it
	void Display(Array arr){
		cout<<"Elements are : "<<endl;
		for(int i=0; i<this->length; i++)
			cout<<this->A[i]<<" ";
		cout<<endl;
	} 

	// we are using call by address here
	// we have arr* so that it can store the address of array coming from actual parameters
	// this means we are accessing the object length and size
	void Append(Array *arr, int x){
		if(this->length<this->size)
			this->A[this->length++]=x;
	}

};

int main()
{
	Array arr={{2, 3, 4, 5, 6}, 10, 5};

	arr.Append(&arr, 10);
	arr.Display(arr);

	return 0;
}