#include <iostream>
using namespace std;
class Array{
public:
    int A[10];
    int size;
    int length;

    void Display(Array arr){
        cout<<"Elements area : ";
        for(int i=0; i<this->length; i++)
            cout<<this->A[i]<<" ";
        cout<<endl;
    }

    void Append(Array *arr, int x){
        if(this->length<this->size)
            this->A[this->length++]=x;
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
            {
                this->A[i]=this->A[i+1];
            }
            this->length--;
            return x;
        }

        return 0;
    }

    int linearSearch(Array arr, int key)
    {
        for(int i=0; i<this->length; i++)
        {
            if(key == this->A[i])
                return i;
        }
        return -1;
    }

    void swap(int *x, int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }

    int improvedLinearSearch(Array *arr, int key)
    {
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

    int improvedLinearSearch2(Array *arr, int key)
    {
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

    int binSearch(Array *arr, int key)
    {
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

    int rBinSearch(Array arr, int l, int h, int key)
    {
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

    void reverse(Array *arr)
    {
        int *B;
        B=new int[this->length];
        for(int i=this->length-1, j=0; i>=0; i--, j++)
        {
            B[j]=this->A[i];
        }
        for(int i=0; i<length; i++){
            this->A[i]=B[i];
        }

    }

    void reverse2(Array *arr){
        for(int i=0, j=this->length-1; i<j;  i++, j--)
        {
            swap(&this->A[i], &this->A[j]);
        }
    }

    void leftShift(Array *arr){
        int x=0;
        x=this->A[0];
        for(int i=0; i<this->length; i++)
            this->A[i]=this->A[i+1];
    }

    void leftRotate(Array *arr){
        int x=this->A[0];
        for(int i=0; i<this->length; i++)
            this->A[i]=this->A[i+1];
        this->A[this->length-1]=x;
    }

    void rightShift(Array *arr){
        int x=this->A[this->length-1];
        for(int i=this->length; i>=0; i--)
            {
                if(i == 0)
                    this->A[i]=0;
                else
                    this->A[i]=this->A[i-1];
            }

    }

    void rightRotate(Array *arr){
        int x=this->A[this->length-1];
        for(int i=this->length; i>=0; i--)
        {
            if(i == 0)
                this->A[i]=x;
            else
                this->A[i]=this->A[i-1];
        }
    }

    // void insertSorted(Array *arr, int x){
    //     int i=this->length-1;
    //     while(this->A[i]>x)
    //     {
    //         this->A[i+1]=this->A[i];
    //         i--;
    //     }
    //     this->A[i+1]=x;
    // }
    void insertSort(Array *arr, int x){
        int i=arr->length-1;
        if(this->length==this->size)
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
        // here we have done length-2 becoz we have length 14
        // the index is filled till 13 and we can compare last index
        // with any forward index so length -2 that will be equal to 
        // i<this->lenght-2 = 12 index can be compared with 13
        for(int i=0; i<=this->length-2; i++)
        {
            if(this->A[i]>this->A[i+1])
                return 0;
        }
        return 1;
    }

    void negLHS(Array *arr){
        int i=0;
        int j=this->length-1;
        while(i<j)
        {
            while(A[i]<0)
            {
                i++;
            }
            while(A[j]>=0)
            {
                j--;
            }
            if(i<j)
                swap(&this->A[i], &this->A[j]);
        }
    }
    
    


};

int main()
{
    // Array arr={{4, 8, 10, 15, 22, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 15, 14};
    Array arr={{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2},10, 9};
    // int res=arr.rBinSearch(arr, 0, arr.length-1, 34);
    // cout<<res<<endl;
    // arr.reverse2(&arr);
    // arr.leftShift(&arr);
    // arr.leftRotate(&arr);
    // arr.rightRotate(&arr);
    // arr.insertSorted(&arr, 22);
    // int res=arr.isSorted(arr);
    // cout<<res<<endl;
    arr.negLHS(&arr);
    arr.Display(arr);

    return 0;
}

