#include <iostream>
using namespace std;
class car{
public:
	virtual void start()=0;
	// {
	// 	cout<<"car started"<<endl;
	// }
	virtual void stop()=0;
	// {
	// 	cout<<"car stopped"<<endl;
	// }
	// its pure virtual function
};
class innova:public car{
public:
	void start(){
		cout<<"Innova started."<<endl;
	}
	void stop(){
		cout<<"Innova stopped."<<endl;
	}
};
class swift:public car{
public:
	void start(){
		cout<<"swift started."<<endl;
	}
	void stop(){
		cout<<"swift stopped."<<endl;
	}
};
int main()
{
	car *p;
	innova I;
	p=&I;
	p->start();
	p->stop();
	swift s;
	p=&s;
	p->start();
	p->stop();


	return 0;
}