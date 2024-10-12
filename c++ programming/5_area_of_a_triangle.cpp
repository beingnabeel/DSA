// program to find the area of a triangle 
#include <iostream>
using namespace std;
int main()
{
	float base, height, area;
	cout<<"Enter the base and height of the triangle :";
	cin>>base>>height;

	area = (base*height)/2;
	cout<<"The area of the triangle is "<<area<<endl;

	return 0;

}