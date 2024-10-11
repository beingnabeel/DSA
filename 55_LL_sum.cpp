#include <iostream>
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
        temp=new node;
        temp->data=A[i];
        temp->next=nullptr;
        last->next=temp;
        last=temp;
    }

}

void Lcount(node* p){
    int count=0;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    cout<<"The no. of elements present in the linked list : "<<count<<endl;
}
// if you write 1 at the front or back it will be done at the returning time only

int rcount(node* p){
    if(p==0)
        return 0;
    return 1+rcount(p->next);
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

void sum(node* p){
    int sum=0;
    while(p!=nullptr){
        sum+=p->data;
        p=p->next;
    }
    cout<<"sum is linked list : "<<sum<<endl;
}
// int rsum(node* p){
//     int sum=0;
//     if(p!=nullptr){
//         return rsum(p->next) + (sum+=p->data);
//     }else{
//         return sum;
//     }
// }
// the above one is done by myself

int rsum(node* p){
    if(p==nullptr)
        return 0;
    else
        return rsum(p->next)+p->data;
}
int main(){
    node* head;
    int A[] = {8, 3, 7, 12, 9};
    create(A, sizeof(A)/sizeof(A[0]), head);
    cout<<"The no of elements present in the linked list are : "<<rcount(head)<<endl;
    sum(head);
    cout<<rsum(head)<<endl;
    Display(head);
    cout<<endl;
    Rdisplay(head);
    cout<<endl;

    return 0;
}