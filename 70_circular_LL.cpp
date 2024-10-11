
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
class circularLinkedList{
private:
    node* head;
public:
    circularLinkedList(int A[], int n);
    void Display();
    void Rdisplay(node* p);
    node* getHead(){
        return head;
    }
    ~circularLinkedList();
};

circularLinkedList::circularLinkedList(int *A, int n){
    node* temp;
    node* tail;
    head=new node;
    head->data=A[0];
    head->next=head;
    tail=head;
    for(int i=1; i<n; i++)
    {
        temp=new node;
        temp->data = A[i];
        temp->next=tail->next;
        tail->next=temp;
        tail=temp;
    }
}

void circularLinkedList::Display(){
    node* p=head;
    do{
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }while(p!=head);
    cout<<endl;
}

void circularLinkedList::Rdisplay(node* p){
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        Rdisplay(p->next);
        cout<<p->data<<" -> "<<flush;
    }
    flag=0;
}

circularLinkedList::~circularLinkedList(){
    node* p=head;
    while(p->next!=head)
        p=p->next;
    while(p!=head)
    {
        p->next=head->next;
        delete head;
        head=p->next;
    }
    if(p==head)
    {
        delete head;
        head=nullptr;
    }
}

int main(){
    int A[] = {1, 3, 5, 7, 9};
    circularLinkedList cl(A, sizeof(A)/sizeof(A[0]));
    cl.Display();
    node* h=cl.getHead();
    cl.Rdisplay(h);

    return 0;
}