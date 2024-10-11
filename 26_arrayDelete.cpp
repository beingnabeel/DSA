#include <iostream>
using namespace std;
class Array{
public:
	int A[10];
	int size;
	int length;

	void Display(Array arr){
		cout<<"Elements are : ";
		for(int i=0; i<this->length; i++)
		{
			cout<<this->A[i]<<" ";
		}
		cout<<endl;
	}

	void Append(Array *arr, int x){
		if(this->length<this->size){
			this->A[this->length++]=x;
		}
	}

	void Insert(Array *arr, int index, int x){
		if(index>=0 && index<=this->length){
			for(int i=this->length; i>index; i--){
				this->A[i]=this->A[i-1];
			}
			this->A[index]=x;
			this->length++;
		}
	}

	int Delete(Array *arr, int index){
		int x=0;
		if(index>=0 && index<this->length)
		{
			x=this->A[index];
			// we are going for length -1 becoz
			// being at 5th index we can copy contents of 6th index
			for(int i=index; i<this->length-1; i++)
				this->A[i]=this->A[i+1];
			this->length--;
			return x;
		}

		return x;
	}
};

int main(){
	Array arr={{2, 3, 4, 5, 6}, 10, 5};
	arr.Append(&arr, 99);
	arr.Insert(&arr, 5, 12);
	arr.Display(arr);

	int res=arr.Delete(&arr, 2);
	cout<<res<<endl;
	arr.Display(arr);


	return 0;

}