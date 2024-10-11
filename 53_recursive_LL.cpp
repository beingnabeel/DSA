 #include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
};

void create(int A[], int n, node*& head) {
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

int main() {
    node* head;
    int A[] = {3, 5, 7, 10, 15, 25, 8, 32, 2};
    create(A, 8, head);
    Display(head);
    cout << endl;
    Rdisplay(head);
    cout<<endl;

    return 0;
}
