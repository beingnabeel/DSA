#include <iostream>
#include <math.h>
using namespace std;

class term {
public:
    int coeff;
    int expo;
};

class poly {
private:
    int n;
    term* t;

public:
    poly(int n) {
        this->n = n;
        t = new term[this->n];
    }

    poly operator+(poly& p);

    friend istream& operator>>(istream& is, poly& p);
    friend ostream& operator<<(ostream& os, poly& p);
};

istream& operator>>(istream& is, poly& p) {
    cout << "Enter terms" << endl; 
    for (int i = 0; i < p.n; i++) {
        cin >> p.t[i].coeff >> p.t[i].expo;
    }
    return is;
}

ostream& operator<<(ostream& os, poly& p) {
    for (int i = 0; i < p.n; i++) {
        cout << p.t[i].coeff << " " << p.t[i].expo << " || ";
    }
    cout << endl;
    return os;
}

poly poly::operator+(poly& p) {
    int i = 0;
    int j = 0;
    int k = 0;
    poly sum(n + p.n);  // Fix: Use the correct constructor and remove 'new'

    while (i < n && j < p.n) {
        if (t[i].expo > p.t[j].expo)
            sum.t[k++] = t[i++];
        else if (p.t[j].expo > t[i].expo)
            sum.t[k++] = p.t[j++];
        else {
            sum.t[k].expo = p.t[i].expo;
            sum.t[k++].coeff = t[i++].coeff + p.t[j++].coeff;
        }
    }

    for (; i < n; i++)
        sum.t[k++] = t[i];
    for (; j < p.n; j++)
        sum.t[k++] = p.t[j];

    sum.n = k;
    return sum;
}

int main() {
    poly p1(3);
    poly p2(5);

    cin >> p1;
    cin >> p2;

    poly sum = p1 + p2;

    cout << "sum is " << endl << sum;

    return 0;
}
