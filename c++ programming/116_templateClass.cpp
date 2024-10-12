#include <bits/stdc++.h>
using namespace std;

template<class T>
class MyStack {
private:
    T *stk;
    int top;
    int size;
public:
    MyStack(int sz) {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template<class T>
void MyStack<T>::push(T x) {
    if(top == size - 1)
        cout << "Stack is full" << endl;
    else {
        top++;
        stk[top] = x;
    }
}

template<class T>
T MyStack<T>::pop() {
    T x = 0;
    if(top == -1)
        cout << "Stack is empty." << endl;
    else {
        x = stk[top];
        top--;
    }
    return x;
}

int main() {
    MyStack<float> s(10);
    s.push(10.5);
    s.push(20.5);
    s.push(30.5);

    cout << "Popped: " << s.pop() << endl; // To check if pop is working correctly
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    return 0;
}
