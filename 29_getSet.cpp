#include <iostream>
using namespace std;
class Array{
public:
    int A[15];
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
        if(this->length<this->size)
            this->A[this->length++]=x;
    }

    void Insert(Array *arr, int index, int x){
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

    int get(Array arr, int index)
    {
        if(index>=0 && index<this->length)
            return this->A[index];
        else
            return -1;
    }

    void set(Array *arr, int index, int x){
        if(index>=0 && index<this->length)
            this->A[index]=x;
    }

    int max(Array arr)
    {
        int high=this->A[0];
        for(int i=1; i<this->length; i++)
        {
            if(this->A[i] > high)
                high=this->A[i];
        }
        return high;
    }

    int min(Array arr){
        int low;
        low=this->A[0];
        for(int i=1; i<this->length; i++)
        {
            if(this->A[i] < low)
                low=this->A[i];
        }
        return low;
    }

    int sum(Array arr){
        int total=0;
        for(int i=0; i<this->length; i++)
        {
            total += this->A[i];
        }
        return total;
    }
    int rSum(Array arr, int n){
        if(n<0)
            return 0;
        else
            return rSum(arr, n-1)+this->A[n];
    }

    float avg(Array arr){
        float value = float(sum(arr));
        return value/this->length;
    }



};

int main()
{
    Array arr={{49, 82, 33, 55, 66, 21, 99, 97, 28, 33, 84, 77, 39, 41, 43}, 15, 15};
    // int res=arr.get(arr, 14);
    // arr.set(&arr, 9, 99);
    // cout<<res<<endl;
    // int res=arr.max(arr);
    // int res=arr.rSum(arr, arr.length-1);
    float res= arr.avg(arr);
    cout<<res<<endl;
    arr.Display(arr);

    return 0;
}