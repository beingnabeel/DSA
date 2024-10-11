#include <iostream>
using namespace std;
// int sum=0;
// int fun(int n)
// {
	
// 	if(n>0)
// 	{
// 		sum += n;
// 		fun(n-1);
// 	}else
// 	{
// 		return sum;
// 	}
// }
int sum(int n){
	if(n == 0)
		return 0;
	else
		return sum(n-1)+n;
}
int main()
{
	int total;
	total= sum(5);
	cout<<total<<endl;


	return 0;
}
// iterative version
// int main()
// {
//     int sum=0;
//     for(int i=0; i<=100; i++)
//     {
//         sum +=i;
//     }

//     cout<<sum<<endl;


//     return 0;
// }