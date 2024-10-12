#include <bits/stdc++.h>
using namespace std;
// case 1 modifieng read only variable
// int main(){
// 	const int x=10;
// 	x++;
// 	cout<<x<<endl;


// 	return 0;
// }

// constant pointers
// int main(){
// 	int x=10;
// 	const int *ptr = &x;
// 	++*ptr;
// 	cout<<x<<endl;
// 	cout<<*ptr;

// 	return 0;
// }

// case 3 pointing cost ptr to another variable
// int main(){
// 	int x=10;
// 	const int *ptr=&x;
// 	cout<<x<<endl;
// 	int y=20;
// 	ptr=&y;
// 	// ++*ptr;
// 	cout<<*ptr<<endl;


// 	return 0;
// }

// case 4 making the ptr constant.
// int main(){
// 	int x=10;
// 	int *const ptr=&x;
// 	int y=20;
// 	// ptr=&y;
// 	++(*ptr);
// 	cout<<y<<endl;
// 	cout<<x<<endl;

// 	return 0;
// }

// case 5 const ptr to integer const.

// int main(){
// 	int x=10;
// 	const int *const ptr=&x;
// 	int y=20;
// 	// ptr=&y;
// 	// ++*ptr;

// 	return 0;
// }

// const keyword in functions.
// class demo{
// public:
// 	int x=10;
// 	int y=20;
// 	void Display()const{
// 		// x++;
// 		cout<<x<<" "<<y<<endl;
// 	}
// };
// int main(){
// 	demo d;
// 	d.Display();

// 	return 0;
// }

// case 2 of fun, call by reference 
void fun(const int &x, int &y){
	// x++;
	cout<<x<<" "<<y<<endl;
}
int main(){
	int a=10, b=20;
	fun(a, b);

	return 0;
}