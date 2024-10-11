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
				cout<<this->A[i]<<" ";
			cout<<endl;
		}

		void Append(Array *arr, int x){
			if(this->length<this->size)
				this->A[this->length++]=x;
		}
		// we are passing *arr to store the addr. of actuar array so that we can modify it

		void Insert(Array *arr, int index, int x){
			if(index>=0 && index<=this->length){
				for(int i=this->length; i>index; i--){
					this->A[i]=this->A[i-1];

				}
				this->A[index]=x;
				this->length++;
			}
		}

	// 	void Insert(Array *A, int index, int x){
    //     if(this->length<this->size && index<=this->length){
    //         int i=this->length;
    //         while(i>index){
    //             this->A[i]=this->A[i-1];
    //             i--;
    //         }
    //         this->A[i]=x;
    //         this->length++;
    //     }
    // }
};
int main(){
	Array arr={{2, 3, 4, 5, 6}, 10, 5};
	arr.Append(&arr, 99);
	arr.Insert(&arr, 5, 12);
	arr.Display(arr);

	return 0;
}