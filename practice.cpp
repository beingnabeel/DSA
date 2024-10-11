#include <iostream>
using namespace std;
int main(){
    char A[]="finding";
    int *H=new int[26]{0};
    int i;
    for(int i=0; A[i]!='\0'; i++)
        H[A[i]-97]++;
    for(i=0; i<26; i++)
    {
        if(H[i]>1)
            cout<<char(i+97)<<" - "<<H[i]<<endl;
    }


    return 0;
}