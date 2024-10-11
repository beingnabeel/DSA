#include <iostream>
#include <climits>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* head = nullptr; // Global variable for the head of the linked list

void create(int A[], int n) {
    node* temp;
    node* last;
    head = new node;
    head->data = A[0];
    head->next = nullptr;
    last = head;
    for (int i = 1; i < n; i++) {
        temp = new node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void Display(node* p) {
    while (p != nullptr) {
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

void Rdisplay(node* p) {
    if (p != nullptr) {
        Rdisplay(p->next);
        cout << p->data << " -> " << flush;
    }
}

int ncount(node* p) {
    int count = 0;
    while (p != nullptr) {
        count++;
        p = p->next;
    }
    return count;
}

int rCount(node* p) {
    if (p == nullptr)
        return 0;
    else
        return rCount(p->next) + 1;
}

int sum(node* p) {
    int sum = 0;
    while (p != nullptr) {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int rsum(node* p) {
    if (p == nullptr)
        return 0;
    else
        return rsum(p->next) + p->data;
}

int smax(node* p) {
    int max = p->data;
    p = p->next;
    while (p != nullptr) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int tmax(node* p) {
    int m = INT_MIN;
    while (p != nullptr) {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int rmax(node* p) {
    int x = 0;
    if (p == nullptr)
        return INT_MIN;
    x = rmax(p->next);
    return x > p->data ? x : p->data;
}

int search(node* p, int key) {
    while (p != nullptr) {
        if (p->data == key)
            return p->data;
        p = p->next;
    }
    return 0;
}

node* rsearch(node* p, int key) {
    if (p == nullptr)
        return nullptr;
    if (key == p->data)
        return p;
    return rsearch(p->next, key);
}

node* impLSearch(node* p, int key) {
    node* q = nullptr;
    // node* p = head;
    // either you pass node ptr p as argument or do the above
    while (p != nullptr) {
        if (key == p->data) {
            if (q != nullptr) {
                q->next = p->next;
                p->next = head;
                head = p;
            }
            return p;
        }
        q = p;
        p = p->next;
    }
    return nullptr;
}

int main() {
    int A[] = { 18, 3, 7, 12, 15 };
    create(A, sizeof(A) / sizeof(A[0]));
    cout << "The no of elements present in the linked list are : " << rCount(head) << endl;
    Display(head);
    cout << "max is : " << rmax(head) << endl;
    cout << "search for 7 " << impLSearch(head, 7) << endl;
    Display(head);
    return 0;
}
