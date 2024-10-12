#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int x=10;
	int &y=x;

	cout<<x<<"\n";
	x++;
	y++;
	cout<<y<<"\n";
	cout<<&x<<"  "<<&y<<"\n";
	// so the above line means that y is only a reference to x and it doesn't have memory of it's own.
	

	return 0;

}