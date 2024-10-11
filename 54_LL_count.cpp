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
    last=head;
    for(int i=1; i<n; i++){
        temp=new node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void LLCount(node* p){
    int count = 0;
    while(p!=nullptr){
        p = p->next;
        count++;
    }
    cout<<"the no. of elements present in the linked list is "<<count<<endl;

}

int rCount(node* p){
    if(p==0)
        return 0;
    else
        return rCount(p->next)+1;
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

int main(){
    node* head;
    int A[] = {3, 5, 6, 10, 15, 25, 8, 32, 2};
    create(A, 9, head);
    cout<<"The no of elements present in the linked list are : "<<rCount(head)<<endl;
    Display(head);
    cout<<endl;
    Rdisplay(head);
    cout<<endl;

    return 0;
}