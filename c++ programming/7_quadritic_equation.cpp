// program to find the roots of quadritic equation
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, r1, r2;

	cout<<"Enter the coefficient a, b, c of the quadritic equation : ";
	cin>>a>>b>>c;

	r1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
	r2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);

	cout<<"The roots of the quadritic equation are "<<r1<<" "<<r2<<endl;

	return 0;
}