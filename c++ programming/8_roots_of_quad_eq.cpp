#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, r1, r2;

	cout<<"Enter the coefficient a b and c of the quadritic equation";
	cin>>a>>b>>c;

	r1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
	r2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
	cout<<"The roots of the quadritic equation is "<<r1<<"and "<<r2<<endl;

	return 0;
}