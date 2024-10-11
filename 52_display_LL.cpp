#include <iostream>
using namespace std;
class node{
public:
	int data;
	node *next;
};

int main()
{
	int A[]={3, 5, 7, 10, 15};
	node *head = new node;
	node *temp;
	node *last;

	head->data = A[0];
	head->next = nullptr;
	last = head;

	// creating a linked list
	for(int i=1; i<sizeof(A)/sizeof(A[0]); i++){
		// create a temporary node
		temp = new node;

		// populate the temporary node 
		temp->data = A[i];
		temp->next = nullptr;

		// last's next is pointing to temp;
		last->next = temp;
		last = temp;
	}

	// displaying a linked list
	node *p=head;

	while(p!=nullptr)
	{
		cout<<p->data<<" -> "<<flush;
		p=p->next;
	}


	return 0;
}

