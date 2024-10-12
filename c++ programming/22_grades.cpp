#include <iostream>
#include <cmath>
using namespace std;
typedef float marks;
int main()
{
	marks m1, m2, m3;
	float avg, Total;

	cout<<"Enter the marks of m1, m2, and m3 respectively. : ";
	cin>>m1>>m2>>m3;

	Total = m1+m2+m3;
	avg=Total/3;

	if (avg>=60)
		cout<<"Grade : A"<<endl;
	else if (avg>=35 && avg<60)
		cout<<"Grade : B"<<endl;
	else if (avg<35 && avg>=20)
		cout<<"Grade : C"<<endl;
	else
		cout<<"Fail";
}