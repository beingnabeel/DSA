#include <iostream>
using namespace std;
class test{
private:
    int a;
protected:
    int b;
public:
    int c;

friend void fun();
};

void fun(){
    test t;
    t.a=15;
    t.b=10;
    t.c=5;
}

int main()
{
    fun();


    return 0;
}

