#include <iostream>
#include <climits>
using namespace std;
class node{
public:
    int data;
    node* next;
};

create(int A[], int n, node*& head){
    node* temp;
    node* last;
    head= new node;
    head->data = A[0];
    head->next = nullptr;
    last=head;
    for(int i=1; i<n; i++){
        temp= new node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next=temp;
        last=temp;;
    }
}

void Display(node* p){
    while(p!=nullptr)
    {
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }
}

void Rdisplay(node* p){
    if(p!=nullptr)
    {
        Rdisplay(p->next);
        cout<<p->data<<" -> "<<flush;
    }
}

int lcount(node* p){
    int count=0;
    while(p!=nullptr)
    {
        count++;
        p=p->next;
    }
    return count;
}

int rcount(node* p){
    if(p==nullptr)
        return 0;
    else
        return rcount(p->next)+1;
}

int lsum(node* p){
    int sum=0;
    while(p!=nullptr)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int rsum(node* p){
    if(p==nullptr)
        return 0;
    else
        return rsum(p->next)+p->data;
}

int lmax(node* p){
    int max=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

int rmax(node* p){
    int x=0;
    if(p==nullptr)
        return 0;
    x=rmax(p->next);
    return x>p->data?x:p->data;
}

node* search(node* p, int key){
    while(p!=nullptr){
        if(p->data == key)
            return p;
        p=p->next;
    }
    return nullptr;
}

node* rsearch(node* p, int key){
    if(p==nullptr)
        return nullptr;
    if(key == p->data)
        return p;
    return rsearch(p->next, key);
}

node* impLSearch(node*& head, int key){
    node* q=nullptr;
    node* p=head;
    while(p!=nullptr)
    {
        if(p->data == key){
            if(q!=nullptr)
            {
                q->next= p->next;
                p->next=head;
                head=p;
            }
            return p;

        }
        q=p;
        p=p->next;
    }
    return nullptr;
}

void insert(node*& head, int index, int x){
    node* t;
    node* p;
    if(index == 0)
    {
        t=new node;
        t->data=x;
        t->next=head;
        head=t;
    }else if(index>0)
    {
        p=head;
        for(int i=0; i<index-1; i++)
            p=p->next;
        if(p)
        {
            t=new node;
            t->data = x;
            t->next=p->next;
            p->next=t;
        }

    }
}

void insert2(node*& head, int index, int x){
    node* t;
    node* p;
    if(index<0 || index>lcount(head))
        return;
    t=new node;
    t->data=x;
    if(index==0)
    {
        t->next=head;
        head=t;
    }else if (index>0)
    {
        p=head;
        for(int i=0; i<index-1; i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }
}

void insertlast(node*& head, int x){
    node* t = new node;
    t->data = x;
    t->next = nullptr;
    if(head == nullptr){
        head = t;  // Update head to point to the new node
    }else{
        node* last = head;
        while(last->next != nullptr){
            last = last->next;
        }
        last->next = t;
    }
}

void sortedInsert(node*& head, int x){
    node* t=new node;
    t->data = x;
    t->next = nullptr;
    node* q = nullptr;   //previous node
    node* p = head;

    // traverse the list until finding the correct position to insert the new node.
    while(p!=nullptr && p->data < x){
        q=p;
        p=p->next;
    }

    // insert the new node in the list
    if(q==nullptr)
    {
        // insert at the begining
        t->next=head;
        head=t;
    }else{
        // insert at the middle or end 
        q->next=t;
        t->next=p;
    }
}

int deleteL(node*& head, int index){
    node* p;
    node* q;
    int x=-1;
    if(index<1 || index>lcount(head))
        return -1;
    if(index == 1)
    {
        q=head;
        x=head->data;
        head=head->next;
        delete q;
    }else{
        p=head;
        q=nullptr;
        for(int i=0; i<index-1 && p; i++)
        {
            q=p;
            p=p->next;
        }
        if(p){
            q->next = p->next;
            x=p->data;
            delete p;
        }
    }
    return x;
}


int isSorted(node* p){
    int x=INT_MIN;
    while(p!=nullptr){
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}


int main(){
    node* head;
    int A[] = {10, 20, 9, 40, 50};
    create(A, sizeof(A)/sizeof(A[0]), head);
    Display(head);
    cout<<endl;
    cout<<"is list sorted "<<isSorted(head)<<endl;
    cout<<endl;

    return 0;
}