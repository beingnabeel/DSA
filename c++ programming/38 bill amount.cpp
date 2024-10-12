#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// if bill amount is less than 100 then no discount.
	// if bill amounti is greater than 100 and less than 500 then 10% discount 
	// if bill amount is greater than equal to 500 than 20% discount.

	int total_amount;
	float discount1=0.0, discount2=0.0;

	cout<<"Enter your Total bill amount : ";
	cin>>total_amount;

	discount1 = total_amount - (total_amount*0.1);
	discount2 = total_amount - (total_amount*0.2);

	if (total_amount<=100)
		cout<<"Sorry! currently no discount available for you. you have to pay : "<<total_amount<<endl;
	else if (total_amount>100 && total_amount<=500)
		cout<<"hurray! you got 10 % discount and now the amount you have to pay is : "<<discount1<<endl;
	else
		cout<<"hurray! you got 20 ! discount and now the amount you have to pay is : "<<discount2<<endl;

	return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
// float billAmount;
// float discount=0.0;
// cout<<"Enter Bill Amount:";
// cin>>billAmount;
// if(billAmount>=500)
// discount=billAmount*20/100;
// else if(billAmount>=100 && billAmount<500)
// discount=billAmount*10/100;
// cout<<"Bill Amount is:"<<billAmount<<endl;
// cout<<"Discount is :"<<discount<<endl;
// cout<<"Discounted Amount is:"<<billAmountdiscount<<
// endl;
// }