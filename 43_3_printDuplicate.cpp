#include <iostream>
using namespace std;
int main(){
    // finding duplicated in a string
    char A[10]="finding";
    int k;
    for(k=0; A[k]!='\0'; k++)
    {}
    k--;   //here the k means the last element
    // and below doing i<k means checking i uptill the last second elementr

    for(int i=0; i<k; i++){
        int count=1;
        if(A[i]!=-1)
        {
            for(int j=i+1; A[j]!='\0'; j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                    A[j]=-1;

                }
            }
            if(count>1)
                cout<<A[i]<<" - "<<count<<endl;
        }
    }


    return 0;
}