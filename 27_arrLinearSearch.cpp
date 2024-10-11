#include <iostream>
using namespace std;
class Array{
public:
    int A[10];
    int size;
    int length;

    void Display(Array arr){
        cout<<"Elemetns are : "<<endl;
        for(int i=0; i<this->length; i++)
            cout<<this->A[i]<<" ";
        cout<<endl;
    }

    void Append(Array *arr, int x){
        if(this->length<this->size)
            this->A[this->length++]=x;

    }

    void Insert(Array *arr, int index, int x)
    {
        if(index>=0 && index<this->length){
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
        {
            x=this->A[index];
            for(int i=index; i<this->length-1; i++)
                this->A[i]=this->A[i+1];
            this->length--;
            return x;
        }
        return 0;
    }
    // we havent passed *arr becoz we dont need to modify the array 
    // we just want to search the key and return its index
    int linearSearch(Array arr, int key){
        for(int i=0; i<this->length; i++)
        {
            if(key == this->A[i])
                return i;

        }
        return -1;
    }
    // the actual parameters are being modified here so we have used call by address

    void swap(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    // here the actual array is being modified so *arr is used
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
};

int main()
{
    Array arr={{8, 9, 4, 7, 6, 5, 3, 10, 14, 2}, 10, 10};

    int res=arr.improvedLinearSearch2(&arr, 3);
    cout<<res<<endl;

    arr.Display(arr);


    return 0;
}