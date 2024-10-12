#include <iostream>
#include <string.h>

using namespace std;
class student{
public:
	int roll;
	string name;
	static int addNo;
	student(string n){
		addNo++;
		roll=addNo;
		name=n;
	}
	void Display(){
		cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
	}

};
int student::addNo=202300;
int main()
{
	student s1("John");
	student s2("Ravi");
	student s3("Khan");
	student s4("Khan");
	student s5("Khan");
	student s6("Khan");

	s1.Display();
	s6.Display();

	cout<<"Number Admission "<<student::addNo<<endl;

	return 0;
}