// creating a list usng repition of same elements multiple times 
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
	forward_list<int> l;
	l.assign(5,10);

	for(auto it=l.begin(); it!=l.end(); it++)
		cout<<(*it)<<" ";

	return 0;   
}

// // assigning values from one forward list to another 
// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
// 	forward_list<int> l;
// 	l.assign({10,20,30,40});
// 	forward_list<int> l2;
// 	l2.assign(l.begin(),l.end());
// 	for(forward_list<int>:: iterator it=l2.begin(); it!=l2.end(); it++)
// 		cout<<(*it)<<" ";


// 	return 0;
// }


// using the assign and remove function
// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
// 	forward_list<int> l;
// 	l.assign({10,20,30,10});
// 	l.remove(10);
// 	for(forward_list<int>:: iterator it=l.begin(); it!=l.end(); it++)
// 		cout<<(*it)<<" ";
// 	return 0;
// }



// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main()
// {
// 	forward_list<int> l={10,15,20};
// 	l.push_front(5);
// 	l.push_front(3);
// 	l.pop_front();
// 	for(int x:l)
// 		cout<<x<<" ";
// 	return 0;
// }