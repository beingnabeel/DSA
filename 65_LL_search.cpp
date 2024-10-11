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
    head=new node;
    head->data = A[0];
    head->next=nullptr;
    last=head;
    for(int i=1; i<n; i++){
        temp=new node;
        temp->data = A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
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

int rCount(node* p){
    if(p==nullptr)
        return 0;
    else
        return rCount(p->next)+1;
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
    if(p!=nullptr)
        return 0;
    x=rmax(p->next);
    return x>p->data?x:p->data;
}

node* search(node* p, int key){
    while(p!=nullptr)
    {
        if(p->data == key)
            return p;
        p=p->next;
    }
    return nullptr;
}

node* rsearch(node* p, int key){
    if(p==nullptr)
        return nullptr;
    if(key== p->data)
        return p;
    return rsearch(p->next, key);
}

node* impLSearch(node*& head, int key)
{
    node* q=nullptr;
    node* p=head;
    while(p!=nullptr)
    {
        if(key==p->data)
        {
            if(q!=nullptr)
            {
                q->next=p->next;
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
    if(index==0)
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
        if(p){
            t=new node;
            t->data=x;
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
    }else if(index>0)
    {
        p=head;
        for(int i=0; i<index-1; i++)
            p=p->next;
        t->next=p->next;
        p->next=t;

    }
}

void insertLast(node*& head, int x){
    node* t=new node;
    t->data = x;
    t->next=nullptr;
    if(head==nullptr)
        head=t;
    else{
        node* last=head;
        while(last->next!=nullptr)
            last=last->next;
        last->next=t;
    }
}


void sortedInsert(node*& head, int x){
    node* t=new node;
    t->data=x;
    t->next=nullptr;
    node* q=nullptr;
    node* p=head;

    while(p!=nullptr && p->data<x)
    {
        q=p;
        p=p->next;
    }
    if(q==nullptr)
    {
        t->next=head;
        head=t;
    }else{
        q->next=t;
        t->next=p;
    }
}

int deletL(node*& head, int index){
    node* q;
    node* p;
    int x=-1;
    if(index < 0 || index > lcount(head))
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
        for(int i=0; i<index-1 && p; i++)
        {
            q=p;
            p=p->next;
        }
        if(p){
            x=p->data;
        q->next=p->next;
        delete p;
        }
    }
    return x;
}

int isSorted(node* p){
    int x=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

void removeDuplicate(node* p){
    node* q=p->next;
    while(q!=nullptr)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

void reverse1(node* p){
    int *B, i=0;
    node* q=p;
    B=new int[lcount(p)];
    while(q!=nullptr)
    {
        B[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=nullptr)
    {
        q->data=B[i--];
        q=q->next;

    }
}

void reverse2(node*& head){
    node* p=head;
    node* q=nullptr;
    node* r=nullptr;
    while(p!=nullptr)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

void reverse3(node*& head){
    if(head == nullptr || head->next == nullptr) {
        return; // If the list is empty or has only one node, no need to reverse
    }
    
    node* first = head;   // The first node of the list
    node* rest = head->next;  // Rest of the list excluding the first node
    
    reverse3(rest);  // Recursively reverse the rest of the list
    
    // Make adjustments to reverse the links
    first->next->next = first; // Make the next node of the current node point to the current node
    first->next = nullptr;  // Set the next of the current node to null to make it the last node
    
    head = rest; // Update the head pointer to point to the new first node
}

int main()
{
    node* head;
    int A[]={3, 5, 6, 7, 8};
    create(A, sizeof(A)/sizeof(A[0]), head);
    Display(head);
    cout<<endl;
    reverse1(head);
    Display(head);
    cout<<endl;
    reverse2(head);
    Display(head);
    cout<<endl;
    reverse3(head);
    Display(head);
    cout<<endl;
    


    return 0;
}