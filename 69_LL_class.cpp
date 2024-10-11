#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};

class LinkedList{
    private:
        node* head;
    public:
        LinkedList(){
            head=nullptr;
        }
        LinkedList(int A[], int n){
            node* temp;
            node* last;
            head=new node;
            head->data=A[0];
            head->next=nullptr;
            last=head;

            for(int i=1; i<n; i++)
            {
                temp=new node;
                temp->data=A[i];
                temp->next=nullptr;
                last->next=temp;
                last=temp;
            }
                }
        ~LinkedList();
        void Display();
        void Insert(int index, int x);
        int Delete(int index);
        int length();
};


LinkedList::~LinkedList(){
    node* p=head;
    while(head)
    {
        head=head->next;
        delete p;
        p=head;
    }
}

void LinkedList::Display(){
    node* p=head;
    while(p)
    {
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }
    cout<<endl;
}

int LinkedList::length(){
    node* p=head;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int x){
    node* t;
    node* p=head;
    if(index< 0 || index>this->length())
        return;
    t=new node;
    t->data=x;
    t->next=nullptr;
    if(index==0)
    {
        t->next=head;
        head=t;

    }else if(index>0)
    {
        for(int i=0; i<index-1; i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }
}

int LinkedList::Delete(int index){
    node* q;
    node* p;
    int x=-1;
    if(index<0 || index>this->length())
        return -1;
    if(index==1)
    {
        p=head;
        q=nullptr;
        x=p->data;
        head=head->next;
        delete p;
    }else{
        p=head;
        q=nullptr;
        for(int i=0; i<index-1; i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            x=p->data;
            delete p;
        }
    }
    return x;
}


int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    l.Display();
    l.Insert(3, 10);
    l.Display();

    return 0;
}