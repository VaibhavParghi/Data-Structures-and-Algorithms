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

void delet_at_end(node*&head){
	node*p=head;
	node*q=p->next;
	while(q->next != NULL){
		p=p->next;
		q=q->next;
	}
	delete q;
	p->next = NULL;

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





	delet_at_end(head);

 	print_list(head);




	return 0;


}

/*
                                                                  explanation :
Traversal Logic:
while (q->next != NULL) ensures p points to the second-to-last node and q to the last node.

Node Deletion:
delete q; frees the memory for the last node.

Pointer Update:
p->next = NULL; ensures the list terminates properly.

*/

	




