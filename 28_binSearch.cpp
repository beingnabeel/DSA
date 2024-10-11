#include <iostream>
using namespace std;
class Array{
public:
	int A[15];
	int size;
	int length;

	void Display(Array arr){
		cout<<"Element are : "<<endl;
		for(int i=0; i<this->length; i++)
			cout<<this->A[i]<<" ";
		cout<<endl;

	}

	void Append(Array *arr, int x){
		if(this->length<this->size)
		{
			this->A[this->length++]=x;
		}
	}

	void Insert(Array *arr, int index, int x){
		// here we have provided the condition that index<this->length 
		// becoz if the length position is already filled with the element
		// then how come  we can shift the elements and indsert at given idx
		if(index>=0 && index<this->length)
		{
			for(int i=this->length; i>index; i--)
			{
				this->A[i]=this->A[i-1];
			}
			this->A[index]=x;
			this->length++;
		}
	}

	int Delete(Array *arr, int index){
		int x=0;
		if(index>=0 && index<=this->length)
			x=this->A[index];
		{
			for(int i=index; i<this->length-1; i++)
			{
				this->A[i]=this->A[i+1];
			}
			this->length--;
			return x;
		}

		return 0;
	}

	int linearSearch(Array arr, int key){
		for(int i=0; i<this->length; i++)
		{
			if(key == this->A[i])
				return i;
		}
		return -1;
	}

	void swap(int *x, int *y){
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
	}

	int improvedLinearSearch(Array *arr, int key){
		for(int i=0; i<this->length; i++)
		{
			if(key == this->A[i])
			{
				swap(&A[i], &A[i-1]);
				return i-1;
			}
		}
		return -1;
	}

	int improvedLinearSearch2(Array *arr, int key){
		for(int i=0; i<this->length; i++)
		{
			if(key == this->A[i])
			{
				swap(&A[i], &A[0]);
				return 0;
			}
		}
		return -1;
	}

	int binSearch(int l, int h, int key){
		int mid=0;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(key == this->A[mid])
				return mid;
			else if(key<this->A[mid])
				h=mid-1;
			else
				l=mid+1;
		}

		return -1;
	}

	int rBinSearch(int l, int h, int key){
		int mid=0;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(key ==this->A[mid])
				return mid;
			else if(key < this->A[mid])
				return rBinSearch(l, mid-1, key);
			else
				return rBinSearch(mid+1, h, key);
		}
		return -1;
	}

	int tutBinarySearch(Array arr, int key){
		int l, mid, h;
		l=0;
		h=this->length-1;
		while(l<=h){
			mid=(l+h)/2;
			if(key == this->A[mid])
				return mid;
			else if(key < this->A[mid])
				h=mid-1;
			else
				l=mid+1;
		}
		return -1;
	}

	// int tutRBinSearch(Array arr, int l, int h, int key){
	// 	int mid=0;
	// 	if(l<=h)
	// 	{
	// 		mid=(l+h)/2;
	// 		if(key == this->A[mid])
	// 			return mid;
	// 		else if(key < this->A[mid])
	// 			return tutRBinSearch(arr, l, mid-1, key);
	// 	}else{
	// 		return tutRBinSearch(arr, mid+1, h, key);
	// 	}
	// 	return -1;
	// }

	int tutRBinSearch(Array arr, int l, int h, int key){
		int mid=0;
		while(l<=h)
		{
			mid=(l+h)/2;
			if(key == this->A[mid])
				return mid;
			else if(key < this->A[mid])
				return tutRBinSearch(arr, l, mid-1, key);
			else
				return tutRBinSearch(arr, mid+1, h, key);
		}
		return -1;
	}

};

int main()
{
	Array arr={{4, 8, 10, 15, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 15, 15};
	// int res=arr.rBinSearch(0, arr.length, 25);
	// cout<<res<<endl;
	int res=arr.tutRBinSearch(arr, 0, arr.length, 34);
	cout<<res<<endl;
	arr.Display(arr);

	return 0;
}