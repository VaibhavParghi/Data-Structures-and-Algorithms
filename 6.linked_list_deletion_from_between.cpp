#include<iostream>
using namespace std;
typedef struct node{
	int data;
	struct node* next;
}node;

void print_list(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp -> data << " ";
		temp = temp ->next;
	}
}


///fucntion to delete a node from between;
void delet_from_mid(node*& head, int index_number){
	node*p=head;
	for(int count = 0;count<index_number - 1 ;count++){
		p=p->next;
	}
	node*q = p->next;

	p->next = q->next;

	delete q;
}
int main(int argc, char const *argv[]){
	node* head=new node;
	node*second=new node;
	node* third=new node;

	head->data=1;
	second->data=2;
	third->data=3;

	head->next=second;
	second->next=third;
	third->next=NULL;



	delet_from_mid(head,2);
	print_list(head);




	return 0;


}
/*
                                                                      explanation:
1 .Initialization:
node* p = head;
initialize p to the head of the list to start traversing.

2. Traversal:
The loop for (int count = 0; count < index_number - 1; count++) moves p forward to the node just before the one to be deleted.

3. Pointer q assignment:
node* q = p->next;
q points to the node that needs to be deleted (at the given index).

4 .Re-linking nodes:
p->next = q->next;
This skips the node q and links the previous node (p) to the node after q.

5. Deletion:
delete q;
Frees the memory occupied by the node being removed

*/
	




