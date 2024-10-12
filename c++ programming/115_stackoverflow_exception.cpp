#include <iostream>
using namespace std;
class StackOverflow:exception{};
class StackUnderflow:exception{};
class stack{
private:
	int *stk;
	int top=-1;
	int size;
public:
	stack(int sz){
		size=sz;
		stk=new int[size];
	}
	void push(int x){
		if(top==size-1)
			throw StackOverflow();
		top++;
		stk[top]=x;
	}
	int pop(){
		if(top==-1)
			throw StackUnderflow();
		return stk[top--];
	}
};
int main(){
	stack s(5);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);

	return 0;
}