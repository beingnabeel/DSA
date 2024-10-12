// program to find the speed
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int u, v, a;
	float speed;

	cout<<"Enter u, v, and a respectively : ";
	cin>>u>>v>>a;

	speed= (v*v - u*u)/(2*a);

	cout<<"Therefore the required speed of the particle is : "<<speed<<endl;

	return 0;
}