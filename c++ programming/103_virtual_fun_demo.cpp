#include <iostream>
using namespace std;
class baseCar{
public:
	virtual void start(){
		cout<<"BaseCar started."<<endl;
	}
};
class advanceCar:public baseCar{
public:
	void start(){
		cout<<"AdvanceCar started."<<endl;
	}
};
int main()
{
	baseCar *p;
	advanceCar a;
	p=&a;

	p->start();

    // basecar *p=new advancecar();
    // p->start();

    // basecar *ptr=new basecar();
    // ptr->start();

    // advancecar *ad=new advancecar();
    // ad->start();


	return 0;
}