#include <iostream>
#include <climits>
using namespace std;
class node{
public:
    int data;
    node* next;
};
void create(int A[], int n, node*& head){
    node* temp;
    node* last;
    head=new node;
    head->data=A[0];
    head->next=nullptr;
    last=head;
    for(int i=1; i<n; i++){
        temp=new node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;

    }
}

void Display(node* p){
    while(p!=nullptr){
        cout<<p->data<<" -> "<<flush;
        p=p->next;
    }
}

void Rdisplay(node* p){
    if(p!=nullptr){
        Rdisplay(p->next);
        cout<<p->data<<" -> "<<flush;
    }
}

int ncount(node* p){
    int c=0;
    while(p!=nullptr){
        c++;
        p=p->next;
    }
    return c;
}

int rcount(node* p){
    if(p==0)
        return 0;
    else
        return rcount(p->next)+1;
}

int sum(node* p){
    int sum=0;
    while(p!=nullptr){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int rsum(node* p){
    if(p==0)
        return 0;
    else
        return rsum(p->next)+p->data;
}

int smax(node* p){
    int m=p->data;
    p=p->next;
    while(p!=nullptr)
    {
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}

int tmax(node* p){
    int m=INT_MIN;
    while(p!=nullptr)
    {
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}

int rmax(node* p){
    int x=0;
    if(p==nullptr)
        return INT_MIN;
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
    if(key == p->data)
        return p;
    return rsearch(p->next, key);
}

node* impLSearch(node*& head, int key){
    node*q=nullptr;
    node*p=head;
    while(p!=nullptr){
        if(key == p->data)
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
// void insert(node*& head, int index, int x){
//     node* t;
//     node* p;
//     if(index<0 || index> ncount(p))
//         return;
//     t=new node;
//     t->data=x;
//     if(index==0)
//     {
//         t->next=head;
//         head=t;
//     }else{
//         for(int i=0; i<index-1; i++)
//             p=p->next;
//         t->next=p->next;
//         p->next=t;
//     }
// }

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
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
}
void insert2(node*& head, int index, int x){
    node* t;
    node* p;
    if(index<0 || index>ncount(head))
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
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}

int main() {
    node* head;
    int A[] = { 18, 3, 7, 12, 15 };
    create(A, sizeof(A) / sizeof(A[0]), head);
    cout << "The no of elements present in the linked list are : " << rcount(head) << endl;
    Display(head);
    cout << "max is : " << rmax(head) << endl;
    cout << "search for 7 " << impLSearch(head, 7) << endl;
    Display(head);
    insert2(head, 0, 25);
    cout<<endl;
    Display(head);
    return 0;
}