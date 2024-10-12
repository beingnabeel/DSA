#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c, d, real_equal,real_unequal, imaginary;

	cout<<"Enter the coefficient a, b, and c of the quadritic equation : ";
	cin>>a>>b>>c;

	d=(b*b)-(4*a*c);
	real_equal= -b/(2*a);
	real_unequal=(-b+sqrt(d))/(2*a);
	imaginary=(-b-sqrt(d))/(2*a);

	cout<<"The discriminant of the quadritic equation is "<<d<<endl;

	if (d==0)
		cout<<"Roots are real and equal. : "<<real_equal<<endl;
	else if (d>0)
		cout<<"Roots are real and unequal. : "<<real_unequal<<endl;
	else if (d<0)
		cout<<"roots are imaginary. "<<imaginary<<endl;
	else
		cout<<"There is some problem with the quad equation.";


}