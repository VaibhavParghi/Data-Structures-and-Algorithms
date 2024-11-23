#include<iostream>
using namespace std;

///node structure
typedef struct node{
	int data;
	struct node* next;
}node;

///function to traversal and print the elements
void traversal_list(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp -> data << " ";
		temp = temp ->next;
	}
}

///function to insert a new node at start / head 
void inserting_node_start(node*& head, int data){
	node* new_node=new node;
	new_node->data=data;
	new_node->next=head;
	head = new_node;

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

	inserting_node_start(head,0);

	traversal_list(head);

	return 0;
}

	
