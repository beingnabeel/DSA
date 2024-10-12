/*program to calculate net salary; program should take the input
1.basic salary
2.percentage allowances
3.percentage of deductions
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float basic_salary, percentage_of_allowance, percentage_of_deductions, NetSalary;

	cout<<"Enter the basic_salary, percentage_of_allowance, and percentage_of_deductions of the user : ";
	cin>>basic_salary>>percentage_of_allowance>>percentage_of_deductions;

	NetSalary = basic_salary + (basic_salary*percentage_of_allowance)/100 - (basic_salary*percentage_of_deductions)/100;

	cout<<"The NetSalary of the user is : "<<NetSalary<<endl;

	return 0;

}