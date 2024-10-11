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
    head = new node;
    head->data = A[0];
    head->next = nullptr;
    last = head;
    for(int i=1; i<n; i++){
        temp = new node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void Display(node* p){
    while(p!=nullptr){
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

int nCount(node* p){
    int count = 0;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    return count;
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
    int sum=0;
    if(p==0)
        return 0;
    else
        return rsum(p->next)+p->data;
}

int smax(node* p){
    int max=p->data;
    p=p->next;
    while(p!=nullptr){
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}
// the above one is done by self

int max(node* p){
    int m=INT_MIN;
    while(p){
        if(p->data>m)
            m=p->data;
        p=p->next;
    }
    return m;
}
int rmax(node* p){
    int x=0;
    if(p==0)
        return INT_MIN;
    x=rmax(p->next);
    return x>p->data?x:p->data;
}
int main(){
    node* head; 
    int A[] = {8, 3, 7, 12, 15};
    create(A, sizeof(A)/sizeof(A[0]), head);
    cout<<"The no of elements present in the linked list are : "<<rcount(head)<<endl;
    Display(head);
    cout<<"max is : "<<rmax(head)<<endl;
    return 0;
}
