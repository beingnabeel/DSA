// #include <iostream>
// using namespace std;
// int main()
// {
// 	int i, n;

// 	cout<<"Enter the number : ";
// 	cin>>n;

// 	if (n == 1)
// 		cout<<n<<" is a prime number.";
// 	else
// 	{
// 		for(i=2; i<n; i++)
// 		{
// 			if (n%i == 0)
// 				cout<<n<<" is not a prime number.";
// 			else
// 				cout<<n<<" is a prime number.";
// 		}
// 	}

// 	return 0;

// }
// program to check prime number

#include <iostream>
using namespace std;
int main()
{
	int n, i, count=0;

	cout<<"Enter the number for which you want to check prime or not : ";
	cin>>n;

	for(i=1; i<=n; i++)
		{
			if (n%i == 0)
				count++;
		}

	if (count == 2)
		cout<<n<<" is a prime number.";
	else
		cout<<n<<" is not a prime number.";


	return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int i, n;
//     bool isPrime = true;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1) {
//         isPrime = false;
//     }
//     else {
//         for (i = 2; i <= n / 2; ++i) {
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//         cout << n << " is a prime number";
//     else
//         cout << n << " is not a prime number";

//     return 0;
// }






