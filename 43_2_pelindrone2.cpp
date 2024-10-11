#include <iostream>
using namespace std;
int main(){
    char A[]="madama";
    int i, j;
    for(j=0; A[j]!='\0'; j++)
    {}
    j--;
    for(i=0; i<j; i++, j--){
        if(A[i]!=A[j])
            break;
    }
    if(A[i]==A[j])
        cout<<"pelindrone"<<endl;
    else
        cout<<"Not a pelindrone"<<endl;

    return 0;
}