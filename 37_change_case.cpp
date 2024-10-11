#include <iostream>
using namespace std;
int main()
{
    char msg[]="wELcoMe";
    int i;
    // changing the case of the string to uppercase
    // for(i=0; msg[i]!='\0'; i++)
    // {
    //     msg[i]=msg[i]-32;
    // }

    // for toggeling the cases
    for(i=0; msg[i]!='\0'; i++)
    {
        if(msg[i]>=65 && msg[i]<=90)
        {
            msg[i]=msg[i]+32;
        }else(msg[i]>=97 && msg[i]<=122){
            msg[i]=msg[i]-32; 
        }   
        

    }

    cout<<msg<<endl;

    return 0;
}