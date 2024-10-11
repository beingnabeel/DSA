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

    void create(int a[], int length){
        this->length=length;
        for(int i=0; i<length; i++)
            this->A[i]=a[i];
    }
    int getLength(){
        return this->length;
    }

    void Display(){
        cout<<"Elements are : ";
        for(int i=0; i<this->length; i++)
            cout<<this->A[i]<<" ";
        cout<<endl;

    }

    int array_sum(){
        int sum=0;
        for(int i=0; i<this->length; i++)
            sum +=this->A[i];
        return sum;

    }

    // if the sequence of natural numbers is starting from 1;
    int missingNumber(){
        int reqsum=((this->A[this->length-1])*(this->A[this->length-1] + 1))/2;
        int ans=reqsum - this->array_sum();
        return ans;        
    }

    // if the sequence of natural number doesn't start from 1
    int missingNumber2(){
        int l, h, diff;
        l=this->A[0];
        h=this->A[this->length-1];
        diff=l-0;
        int i=0;
        while(i<this->length)
        {
            if((this->A[i]-i) == diff)
                i++;
            else
                return diff+i;
        }
    }

    // if the sequence is not starting from 1 and the number of elements missing also is greater than one
    void multipleMissing(){
        int l, h, diff;
        l=this->A[0];
        h=this->A[this->length-1];
        diff=l-0;
        for(int i=0; i<this->length; i++){
            if((this->A[i]-i)!=diff)
            {
                while(diff<A[i]-i)
                {
                    cout<<i+diff<<endl;
                    diff++;
                }
            }
        }
    }
    int max(){
        int maxi=this->A[0];
        for(int i=1; i<this->length; i++)
        {
            if(this->A[i]>maxi)
                maxi=this->A[i];
        }
        return maxi;
    }

    int min(){
        int mini = this->A[0];
        for(int i=0; i<this->length; i++)
        {
            if(this->A[i]<mini)
                mini=this->A[i];
        }
        return mini;
    }
    int noofelements(){
        return this->length;
    }
    void multipleMissingUnsorted(){
        int l=0, h=0, n=0;
        l=this->min();
        h=this->max();
        n=this->noofelements();
        int *H = new int[h+1]{0};
        // for(int i=0; i<h; i++)
        //     H[i]=0;
        for(int i=0; i<n; i++)
            H[this->A[i]]++;
        for(int i=l; i<=h; i++)
        {
            if(H[i]==0)
                cout<<i<<endl;
        }


    } 

    void printDuplicate(){
        int last_duplicate=0;
        for(int i=0; i<this->length-1; i++)
        {
            if((this->A[i] == this->A[i+1]) && (this->A[i] !=last_duplicate))
            {
                cout<<this->A[i]<<endl;
                last_duplicate=this->A[i];
            }

        }
    } 

    void countingDuplicate(){
        for(int i=0; i<this->length-1; i++){
            if(this->A[i] == this->A[i+1])
            {
                int j=i+1;
                while(this->A[j]==this->A[i]) j++;
                cout<<this->A[i]<<" is appearing "<<j-i<<" times."<<endl;
                i=j-1;                
            }
        }
    }

    void countingDuplicateHasing(){
        // we are doing this way becoz its a sorted array else
        // we can use max and min for l, h in unsorted case
        int l=this->A[0];
        int h=this->A[this->length-1];
        int n=this->noofelements();
        int *H=new int[h+1]{0};
        for(int i=0; i<n; i++){
            H[this->A[i]]++;        
        }
        for(int i=l; i<=h; i++){
            if(H[i]>1)
                cout<<i<<" - "<<H[i]<<endl;

        }
    }
    void printDuplicateUnsorted(){
        for(int i=0; i<this->length-1; i++){
            int count=1; 
            if(this->A[i]!=-1)
            {
                for(int j=i+1; j<this->length; j++){
                    if(this->A[i] == this->A[j])
                    {
                        count++;
                        this->A[j]=-1;
                    }
                }
                if(count>1)
                    cout<<this->A[i]<<" - "<<count<<endl;
            }
        }
    }

    void duplicateUnsortedHasing(){
        int l=this->min();
        int h=this->max();
        int n=this->noofelements();
        int *H=new int[h+1]{0};
        for(int i=0; i<n; i++)
            H[this->A[i]]++;
        for(int i=l; i<=h; i++)
        {
            if(H[i]>1)
                cout<<i<<" - "<<H[i]<<endl;
        }
    }

    void pairSum(int k){
        for(int i=0; i<this->length-1; i++){
            for(int j=i+1; j<this->length; j++){
                if(this->A[i]+this->A[j] == k)
                    cout<<this->A[i]<<" + "<<this->A[j]<<" = "<<k<<endl;

            }
        }
    }

    void pairSumHashing(int k){
        int l=this->min();
        int h=this->max();
        int n=this->noofelements();
        int *H=new int[h+1]{0};
        for(int i=0; i<n; i++){
            if(H[k-this->A[i]] != 0)
                cout<<this->A[i]<<" + "<<k-this->A[i]<<" = "<<k<<endl;
            H[this->A[i]]++;            
        }
    }

    void pairSumSorted(int k){
        int i=0;
        int j=this->length-1;
        while(i<j){
            if((this->A[i]+this->A[j]) == k)
            {
                cout<<this->A[i]<<" + "<<this->A[j]<<" = "<<k<<endl;
                i++;
                j--;
            }else if((this->A[i]+this->A[j])>k){
                j--;
            }else{
                i++;
            }
        }
    }

    // finding max and min in a single scan
    void maxMin(){
        int maxi=this->A[0];
        int mini=this->A[0];
        for(int i=0; i<this->length; i++){
            if(this->A[i]<mini)
                mini=this->A[i];
            else if(this->A[i]>maxi)
                maxi=this->A[i];
        }
        cout<<"maximum "<<maxi<<"- minimum: "<<mini<<endl;

    }
};

int main(){
    Array arr(20);
    // int b[]={3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    // int b[]={8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int b[]={6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    // int b[]= {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    arr.create(b, 10);
    arr.Display();

    // cout<<arr.missingNumber2()<<endl;
    // arr.duplicateUnsortedHasing();
    // arr.pairSumHashing(10);
    // arr.pairSumSorted(10);
    arr.maxMin();



    return 0;
}