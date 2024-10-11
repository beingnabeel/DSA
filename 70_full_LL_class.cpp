#include <iostream>
#include <climits>
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
    LinkedList(int A[], int n);
    ~LinkedList();
    node* getHead(){
        return head;
    }
    void Display();
    void Rdisplay(node* p);
    int lcount();
    int rCount(node* p);
    int lsum();
    int rsum(node* p);
    int lmax();
    int rmax(node* p);
    node* search(int key);
    node* rsearch(node* p, int key);
    node* impLSearch(int key);
    void Insert(int index, int x);
    void insertLast(int x);
    void sortedInsert(int x);
    int deleteL(int index);
    int isSorted();
    void removeDuplicate();
    void reverse1();
    void reverse2();
    void reverse3(node* p);
    void merge(node* p, node* q);
    void concatinating(node* p, node* q);
    int isLoop();

};

LinkedList::LinkedList(int A[], int n){
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

LinkedList::~LinkedList(){
    node* p=head;
    while(head){
        head=head->next;
        delete p;
        p=head;
    }
}

void LinkedList::Display(){
    node* p=head;
    while(p!=nullptr)
    {
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }
    cout<<endl;
}

void LinkedList::Rdisplay(node* p){
    if(p!=nullptr)
    {
        Rdisplay(p->next);
        cout<<p->data<<" -> "<<flush;
    }
}

int LinkedList::lcount(){
    node* p=head;
    int count=0;
    while(p!=nullptr)
    {
        count++;
        p=p->next;
    }
    return count;
}

int LinkedList::rCount(node* p){
    if(p==nullptr)
        return 0;
    return rCount(p->next)+1;
}

int LinkedList::lsum(){
    int sum=0;
    node* p=head;
    while(p!=nullptr)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int LinkedList::rsum(node* p){
    if(p==nullptr)
        return 0;
    return rsum(p->next)+p->data;

}

int LinkedList::lmax(){
    node* p=head;
    int max=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}
int LinkedList::rmax(node* p){
    int x=0;
    if(p==nullptr)
        return 0;
    x=rmax(p->next);
    return x>p->data?x:p->data;
}

node* LinkedList::search(int key){
    node* p=head;
    while(p!=nullptr)
    {
        if(p->data==key)
            return p;
        p=p->next;
    }
    return nullptr;


}
node* LinkedList::rsearch(node* p, int key){
    if(p==nullptr)
        return nullptr;
    if(p->data==key)
        return p;
    return rsearch(p->next, key);
}

node* LinkedList::impLSearch(int key){
    node* q=nullptr;
    node* p=head;
    while(p!=nullptr)
    {
        if(p->data == key)
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

void LinkedList::Insert(int index, int x){
    node* t;
    node* p;
    if(index < 0 || index>this->lcount())
        return;
    t=new node;
    t->data=x;
    if(index == 0)
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

void LinkedList::insertLast(int x){
    node* t=new node;
    t->data=x;
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

void LinkedList::sortedInsert(int x){
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

int LinkedList::deleteL(int index){
    node* q=nullptr;
    node* p;
    int x=-1;
    if(index<0 || index>this->lcount())
        return -1;
    if(index==1)
    {
        p=head;
        x=p->data;
        head=head->next;
        delete p;
    }else{
        p=head;
        for(int i=0; i<index-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}

int LinkedList::isSorted(){
    node* p=head;
    int x=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data<x)
            return 0;
        x=p->data;
        p=p->next;
    }
    return 1;

}

void LinkedList::removeDuplicate(){
    node* p=head;
    node* q=p->next;
    while(q!=nullptr)
    {
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }
}

void LinkedList::reverse1(){
    int *B, i=0;
    node* p=head;
    B=new int[this->lcount()];
    while(p!=nullptr)
    {
        B[i]=p->data;
        p=p->next;
        i++;
    }
    p=head;
    i--;
    while(p!=nullptr)
    {
        p->data=B[i--];
        p=p->next;
    }
}

void LinkedList::reverse2(){
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

void LinkedList::reverse3(node* p){
    if(p==nullptr || p->next==nullptr)
        return;
    node* first=p;
    node* rest=p->next;
    reverse3(rest);
    first->next->next=first;
    first->next=nullptr;
    p=rest;
}

void LinkedList::merge(node* p, node* q){
    node* last;
    node* third;
    if(p->data<q->data){
        third=p;
        last=p;
        p=p->next;
        third->next=nullptr;
    }else{
        third=q;
        last=q;
        q=q->next;
        third->next=nullptr;
    }
    while(p!=nullptr && q!=nullptr)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            // last->next=nullptr;
        }else{
            last->next=q;
            last=q;
            q=q->next;
            // last->next=nullptr;
        }
    }
    if(p)
        last->next=p;
    if(q)
        last->next=q;
}

void LinkedList::concatinating(node* p, node* q){
    while(p->next!=nullptr)
        p=p->next;
    p->next=q;
    q=nullptr;
}

int LinkedList::isLoop(){
    node* p=head;
    node* q=head;
    do{
        p=p->next;
        q=q->next;
        q=q!=nullptr?q->next:nullptr;
    }while(p!=nullptr && q!=nullptr && p!=q);
    if(p==q)
        return 1;
    else
        return 0;
}


int main(){
    int A[]={1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    node* h=l.getHead();
    l.Display();
    l.Rdisplay(h);
    cout<<endl;
    cout<<l.lcount()<<endl;
    cout<<l.rCount(h)<<endl;
    cout<<l.lsum()<<endl;
    cout<<l.rsum(h)<<endl;
    cout<<l.lmax()<<endl;
    cout<<l.rmax(h)<<endl;
    cout<<l.search(3)<<endl;
    cout<<l.rsearch(h, 3)<<endl;
    cout<<l.impLSearch(3)<<endl;
    l.Display();
    l.Insert(0, 10);
    l.Display();
    l.insertLast(9);
    l.Display();
    cout<<l.deleteL(1)<<endl;
    cout<<l.deleteL(1)<<endl;
    l.Display();
    l.sortedInsert(7);
    l.Display();
    cout<<l.isSorted()<<endl;
    l.insertLast(9);
    l.Display();
    l.removeDuplicate();
    l.Display();
    // l.reverse1();
    // l.Display();
    // l.reverse2();
    // l.Display();
    // h=l.getHead();
    // l.reverse3(h);
    // l.Display();
    // int B[]={6, 8, 10, 11, 12};
    // LinkedList l2(B, 5);
    // node* h2=l2.getHead();
    // l.merge(h, h2);
    // l.Display();

    return 0;
}