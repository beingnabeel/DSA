#include <iostream>
using namespace std;
class Array{
public:
	int A[10];
	int size;
	int length;

	void Display(Array arr){
		cout<<"Elements are : ";
		for(int i=0; i<arr.length; i++)
			cout<<arr.A[i]<<" ";
		cout<<endl;

	}

	Array* UnionSorted(Array *arr1, Array *arr2){
		int i=0, j=0, k=0;
		Array *arr3=new Array();
		while(i<arr1->length && j<arr2->length)
		{
			if(arr1->A[i] == arr2->A[j])
			{
				arr3->A[k++]=arr1->A[i++];
				j++;
			}else if(arr1->A[i]<arr2->A[j])
			{
				arr3->A[k++]=arr1->A[i++];
			}else{
				arr3->A[k++]=arr2->A[j++];
			}
		}
		for(; i<arr1->length; i++)
			arr3->A[k++]=arr1->A[i];
		for(; j<arr2->length; j++)
			arr3->A[k++]=arr2->A[j];

		arr3->length = arr1->length + arr2->length;
		arr3->size=10;
		return arr3;

	}

	Array *Intersection(Array *arr1, Array *arr2){
		int i=0, j=0, k=0; 
		Array *arr3 = new Array();
		while(i<arr1->length && j<arr2->length)
		{
			if(arr1->A[i] == arr2->A[j])
			{
				arr3->A[k++]=arr1->A[i++];
				j++;
			}else if(arr1->A[i]<arr2->A[j])
			{
				i++;
			}else{
				j++;
			}
		}
		arr3->length=arr1->length+arr2->length;
		arr3->size=10;
		return arr3;
	}

	Array *Difference(Array *arr1, Array *arr2){
		int i=0, j=0, k=0;
		Array *arr3=new Array();
		while(i<arr1->length && j<arr2->length)
		{
			if(arr1->A[i] == arr2->A[j])
			{
				i++;
				j++;
			}else if(arr1->A[i]<arr2->A[j])
			{
				arr3->A[k++]=arr1->A[i++];
			}else{
				j++;
			}
		}
		for(; i<arr1->length; i++)
			arr3->A[k++]=arr1->A[i];

		arr3->length=arr1->length+arr2->length;
		arr3->size=10;
		return arr3;

	}
	
	int setMembership(Array arr1, int key){
		for(int i=0; i<arr1.length; i++)
		{
			if(key == arr1.A[i])
				return i;
		}
		return -1;
	}
};
int main()
{
	Array arr1={{3, 4, 5, 6, 10}, 10, 5};
	Array arr2={{2, 4, 5, 7, 12}, 10, 5};
	Array *arr3;
	// arr3=arr3->Intersection(&arr1, &arr2);
	// arr3->Display(*arr3);

	// arr3=arr3->Difference(&arr1, &arr2);
	// arr3->Display(*arr3);
	int res=arr1.setMembership(arr1, 88);
	cout<<res<<endl;
	arr1.Display(arr1);


	return 0;
}