// program to find the area of a circle 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float pi, r, area;
	cout<<"Enter the radius of the circle : ";
	cin>>r;

	pi = 3.14f;
	area = pi*(r*r);

	cout<<"The are of the circle is : "<<area<<endl;

	return 0;

}