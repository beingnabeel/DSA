#include <iostream>
using namespace std;
class Array{
private:
    int *A;
    int size;
    int length;
public:
    Array(int size){
        this->size = size;
        A=new int[size];
    }
    void create(Array A, int B[], int length){
        this->length=length;
        for(int i=0; i<this->length; i++){
            this->A[i]=B[i];
        }
    }

    int getLength(){
        return this->length;
    }

    void Display(Array A){
        cout<<"Elements are : "<<endl;
        for(int i=0; i<this->length; i++)
            cout<<this->A[i]<<" ";
        cout<<endl;
    }

    void Append(Array *A, int x){
        if(this->length<this->size)
            this->A[this->length++]=x;
    }

    void Insert(Array *A, int index, int x){
        if(index>=0 && index<=this->length)
        {
            for(int i=this->length; i>index; i--){
                this->A[i]=this->A[i-1];

            }
            this->A[index]=x;
            this->length++;
        }
    }

    int deleteElement(Array *A, int index){
        int x=0;
        if(index>=0 && index<this->length)
        {
            x=this->A[index];
            for(int i=index; i<this->length; i++)
                this->A[i]=this->A[i+1];
            this->length--;
            return x;
        }

        return -1;
    }

    int linearSearch(Array A, int key){
        for(int i=0; i<this->length; i++){
            if(this->A[i] == key)
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
        for(int i=0; i<this->length; i++){
            if(this->A[i]==key){
                swap(&this->A[i-1], &this->A[i]);
                return i-1;
            }
        }

        return -1;
    }

    int improvedLinearSearch2(Array *A, int key){
        for(int i=0; i<this->length; i++){
            if(this->A[i]==key){
                swap(&this->A[i], &this->A[0]);
                return 0;
            }
        }
        return -1;
    }
    int binSearch(Array A, int l, int h, int key){
        int mid=0;
        while(l<=h){
            mid=(l+h)/2;
            if(key == this->A[mid])
                return mid;
            else if(key <this->A[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }

    int rBinSearch(Array A, int l, int h, int key){
        int mid=0;
        while(l<=h){
            mid=(l+h)/2;
            if(key == this->A[mid])
                return mid;
            else if(key <this->A[mid])
                return rBinSearch(A, l, mid-1, key);
            else
                return rBinSearch(A, mid+1, h, key);
        }
        return -1;
    }

    int get(Array arr, int index){
        if(index>=0 && index<this->length)
            return this->A[index];
    }

    void set(Array *arr, int index, int x){
        if(index>=0 && index<this->length)
            this->A[index]=x;

    }

    int lmax(Array arr){
        int maxi=this->A[0];
        for(int i=1; i<this->length; i++){
            if(maxi<this->A[i])
                maxi=this->A[i];
        }
        return maxi;
    }

    int lmin(Array arr){
        int mini=this->A[0];
        for(int i=1; i<this->length; i++){
            if(mini>this->A[i])
                mini=this->A[i];
        }
        return mini;
    }

    int lsum(Array A){
        int sum=0;
        for(int i=0; i<this->length; i++)
        {
            sum +=this->A[i];
        }

        return sum;
    }

    int rsum(Array A, int n){
        if(n<0)
            return 0;
        else
            return rsum(A, n-1) + this->A[n];
    }

    float avg(Array arr){
        float average = float(lsum(arr) / this->length);
        return average;
    }

    void reverse(Array *A){
        int *B;
        B=new int[this->length];
        for(int i=this->length-1, j=0; i>=0; i--, j++){
            B[j]=this->A[i];
        }
        for(int i=0; i<this->length; i++){
            this->A[i]=B[i];
        }
    }

    void reverse2(Array *A){
        for(int i=0, j=this->length-1; i<j; i++, j--)
            swap(&this->A[i], &this->A[j]);

    }

    void leftshift(Array *arr){
        int x=this->A[0];
        for(int i=0; i<this->length; i++){
            this->A[i]=this->A[i+1];
        }

    }

    void leftRotate(Array *arr){
        int x=this->A[0];
        for(int i=0; i<this->length; i++){
            if(i==this->length-1)
                this->A[i]=x;
            else
                this->A[i]=this->A[i+1];
        }
    }

    void rightshift(Array *A){
        int x=this->A[this->length-1];
        for(int i=this->length-1; i>=0; i--)
        {
            if(i==0)
                this->A[i]=0;
            else
                this->A[i]=this->A[i-1];
            
        }
    }

    void rightRotate(Array *A){
        int x=this->A[this->length-1];
        for(int i=this->length-1; i>=0; i--)
        {
            if(i==0)
                this->A[i]=x;
            else
                this->A[i]=this->A[i-1];
        }
    }

    void insertsort(Array *A, int x){
        int i=this->length-1;
        if(this->length==this->size)
            return;
        while(this->A[i]>x){
            this->A[i+1]=this->A[i];
            i--;
        }
        this->A[i+1]=x;
        this->length++;

    }

    int isSorted(Array arr){
        for(int i=0; i<this->length-1; i++)
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

    Array* merge(Array *arr1, Array *arr2){
        Array *arr3=new Array(arr1->size+arr2->size);
        int i=0, j=0, k=0;
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j])
                arr3->A[k++]=arr1->A[i++];
            else
                arr3->A[k++]=arr2->A[j++];
        }
        for(; i<arr1->length; i++)
            arr3->A[k++]=arr1->A[i];
        for(; j<arr2->length; j++)
            arr3->A[k++]=arr2->A[j];

        arr3->length=arr1->length+arr2->length;
        arr3->size=10;
        return arr3;

    }

    Array *UnionSorted(Array *arr1, Array *arr2){
        int i=0, j=0, k=0;
        Array *arr3=new Array(arr1->size+arr2->size);
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i] == arr2->A[j])
            {
                arr3->A[k++]=arr1->A[i++];
                j++;
            }else if(arr1->A[i]<arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
            }else{
                arr3->A[k++]=arr2->A[j++];
            }
        }

        for(; i<arr1->length; i++)
            arr3->A[k++]=arr1->A[i];
        for(; j<arr2->length; j++)
            arr3->A[k++]=arr2->A[j];
        arr3->length=k;
        return arr3;
    }

    Array *Intersection(Array *arr1, Array *arr2){
        int i=0, j=0, k=0;
        Array *arr3=new Array(arr1->size+arr2->size);
        while(i<arr1->length && j<arr2->length){
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
        arr3->length=k;
            return arr3;

    }

    Array *Difference(Array *arr1, Array *arr2){
        int i=0, j=0, k=0;
        Array *arr3=new Array(arr1->size+arr2->size);
        while(i<arr1->length && j<arr2->length){
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
        arr3->length=k;
        return arr3;
    }

    int setMembership(Array arr1, int key){
        for(int i=0; i<this->length; i++){
            if(key == this->A[i])
                return i;
        }
        return -1;
    }
};

int main(){
    // Array arr(20);
    // // int b[] = {4, 8, 10, 15, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};
    // int b[]={-6, 3, -8, 10, 5, -7, -9, 12, -4, 2};
    // arr.create(arr, b, 10);
    // arr.Display(arr);
    // arr.Append(&arr, 25);
    // arr.Display(arr);
    // arr.Insert(&arr, 3, 77);
    // arr.Display(arr);
    // arr.deleteElement(&arr, 4);
    // arr.Display(arr);
    // cout<<arr.improvedLinearSearch2(&arr, 5)<<endl;
    // cout<<arr.rBinSearch(arr, 0, arr.getLength(), 33)<<endl;
    // cout<<arr.lmax(arr)<<endl;
    // cout<<arr.lmin(arr)<<endl;
    // cout<<arr.get(arr, 7)<<endl;
    // arr.set(&arr, 7, 99);
    // cout<<arr.lsum(arr)<<endl;
    // cout<<arr.rsum(arr, arr.getLength())<<endl;
    // arr.Display(arr);
    // cout<<arr.avg(arr)<<endl;
    // cout<<arr.getLength()<<endl;
    // cout<<"Before revrsing : "<<endl;
    // arr.Display(arr);
    // // arr.reverse2(&arr);
    // // cout<<"After reversing the array: "<<endl;
    // // arr.insertsort(&arr, 30);
    // // arr.Display(arr);
    // cout<<arr.isSorted(arr)<<endl;
    // arr.Display(arr);
    // arr.negLHS(&arr);
    // arr.Display(arr);
    int a[]={2, 9, 21, 28, 35};
    int b[]= {3, 6, 16, 18, 28};

    Array arr1(10);
    arr1.create(arr1, a, 5);
    Array arr2(10);
    arr2.create(arr2, b, 5);
    Array *arr3;
    arr3=arr3.merge(&arr1, &arr2);
    arr3->Display(*arr3);


    return 0;
}