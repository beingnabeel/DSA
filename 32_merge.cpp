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

    void Append(Array *arr, int x){
        if(this->length<this->size){
            this->A[this->length++]=x;
        }
    }

    void Insert(Array *arr, int index, int x){
        if(index>=0 && index<this->length)
        {
            for(int i=this->length; i>index; i--)
                this->A[i]=this->A[i-1];
            this->A[index]=x;
            this->length++;

        }
    }

    int Delete(Array *arr, int index){
        int x=0;
        if(index>=0 && index<=this->length)
        {
            x=this->A[index];
            for(int i=index; i<this->length-1; i++)
                this->A[i]=this->A[i+1];
            this->length--;
            return x;
        }
        return -1;
    }

    int linearSearch(Array arr, int key){
        for(int i=0; i<this->length; i++)
        {
            if(key == this->A[i])
                return i;

        }
        return -1;
    }

    void swap(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

    int improvedLinearSearch(Array *arr, int key){
        for(int i=0; i<this->length; i++)
        {
            if(key == this->A[i])
            {
                swap(&this->A[i], &this->A[i-1]);
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
                swap(&this->A[i], &this->A[0]);
                return 0;
            }
        }
        return -1;
    }

    int binSearch(Array arr, int key){
        int l, h, mid=0;
        l=0;
        h=this->length-1;
        while(l<=h)
        {
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

    int rBinSearch(Array arr, int l, int h, int key){
        int mid=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(key == this->A[mid])
                return mid;
            else if(key < this->A[mid])
                return rBinSearch(arr, l, mid-1, key);
            else
                return rBinSearch(arr, mid+1, h, key);
        }
        return -1;
    }

    void reverse(Array *arr){
        int *B=new int[this->length];
        for(int i=this->length-1, j=0; i>=0; i--, j++)
        {
            B[j]=this->A[i];
        }
        for(int i=0; i<this->length; i++)
            this->A[i]=B[i];
    }

    void reverse2(Array *arr){
        for(int i=0, j=this->length-1; i<j; i++, j--)
        {
            swap(&this->A[i], &this->A[j]);
        }
    }

    void leftShift(Array *arr){
        int x=this->A[0];
        for(int i=0; i<this->length; i++)
        {
            if(i == this->length-1)
                this->A[i]=0;
            else
                this->A[i]=this->A[i+1];
        }
    }

    void leftRotate(Array *arr){
        int x=this->A[0];
        for(int i=0; i<this->length; i++)
        {
            if(i== this->length-1)
                this->A[i]=x;
            else
                this->A[i]=this->A[i+1];
        }
    }

    void rightShift(Array *arr){
        int x=this->A[this->length-1];
        for(int i=length-1; i>=0; i--)
        {
            if(i == 0)
                this->A[i]=0;
            else
                this->A[i]=this->A[i-1];
        }
    }

    void rightRotate(Array *arr){
        int x=this->A[this->length-1];
        for(int i=this->length-1; i>=0; i--)
        {
            if(i==0)
                this->A[i]=x;
            else
                this->A[i]=this->A[i-1];
        }
    }

    void insertSort(Array *arr, int x){
        int i=this->length-1;
        if(this->length == this->size)
            return;
        while(i>=0 && this->A[i]>x)
        {
            this->A[i+1]=this->A[i];
            i--;
        }
        this->A[i+1]=x;
        this->length++;

    }

    int isSorted(Array arr){
        for(int i=0; i<this->length; i++)
        {
            if(this->A[i]>this->A[i+1])
                return 0;
        }

        return 1;
    }

    void rearrange(Array *arr){
        int i=0, j=this->length-1;
        while(i<j){
            while(this->A[i]<0)
                i++;
            while(this->A[j]>0)
                j--;
            if(i<j)
                swap(&this->A[i], &this->A[j]);
        }
    }

    Array* Merge(Array *arr1, Array *arr2){
        int i=0, j=0, k=0;
        Array *arr3=new Array();
        while(i<arr1->length && j<arr2->length)
        {
            if(arr1->A[i]<arr2->A[i])
                arr3->A[k++]=arr1->A[i++];
            else
                arr3->A[k++]=arr2->A[j++];
        }
        for(; i<arr1->length; i++)
            arr3->A[k++]=arr1->A[i];
        for(; j<arr2->length; j++)
            arr3->A[k++]=arr2->A[j];

        arr3->length = arr1->length+arr2->length;
        arr3->size=10;
        return arr3;
    }


};

int main()
{
    Array arr1={{2, 9, 21, 28, 35}, 10, 5};
    Array arr2={{3, 6, 16, 18, 28}, 10, 5};
    Array *arr3;
    arr3=arr3->Merge(&arr1, &arr2);
    arr3->Display(*arr3);

    return 0;
}