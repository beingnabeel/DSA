#include <iostream>
using namespace std;
class Array{
public:
    int A[12];
    int size;
    int length;

    void Display(Array arr){
        cout<<"Elements are : ";
        for(int i=0; i<arr.length; i++)
            cout<<arr.A[i]<<" ";
        cout<<endl;
    }

    int sum(Array arr){
        int total=0;
        for(int i=0; i<arr.length; i++)
        {
            total+=arr.A[i];
        }
        return total;
    }

    int missingNumber(Array arr){
        int reqSum=((this->A[this->length-1])*(this->A[this->length-1]+1))/2;
        int ans=reqSum - arr.sum(arr);
        return ans;
    }

    // // if the sequence of natural numbers is starting from 1;
    // int missingNumber(){
    //     int reqsum=((this->A[this->length-1])*(this->A[this->length-1] + 1))/2;
    //     int ans=reqsum - this->array_sum();
    //     return ans;        
    // }

    int missingNumber2(Array arr){
        int l, h, diff;
        l=this->A[0];
        h=this->A[this->length-1];
        int i=0;
        while(i<this->length)
        {
            if((this->A[i]-i) == l)
                i++;
            else
                return l+i;  
            // here we are returning the plus of common difference between
            // element and the idx and the idx value itself.
            

        }
    }
};

int main()
{
    Array arr={{6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17}, 12, 11};
    int sol=arr.missingNumber2(arr);
    cout<<"missing element is "<<sol<<endl;
    arr.Display(arr);

    return 0;
}