#include<bits/stdc++.h>
using namespace std;
typedef struct node {
	int data;
	node *next;
} node;

///this function deletes the first node from the linked - list ;
void delete_first_node(node*&head) {

  ///a pointer ptr which will point to head (first node of list)
	node* ptr = head;

  ///moving the head point to second node of list , now head will point to second node 
	head= head->next;

  ///free or delete the first node , as ptr  was pointing to first node , so just delete the pt; 
	delete ptr;
}


void print_list(node*&head) {
	node* ptr=head;
	while(ptr!=NULL) {
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}

}
int main() {
	node* head=new node;
	node*second=new node;
	node* third=new node;

	head->data=1;
	second->data=2;
	third->data=3;

	head->next=second;
	second->next=third;
	third->next=NULL;
	//delete_full_linked_list(head);
	print_list(head);
	cout<<"\n";
	delete_first_node(head);
	print_list(head);


	return 0;

}



/*
                                                                  explanation:
1. node*& head
The head pointer is passed by reference (&), so any changes made to head inside the function will affect the original head outside the function.


2. node* ptr = head;
A temporary pointer ptr is created and set to the current head.
Purpose: To store the address of the first node, which will be deleted.


3. head = head->next;
The head pointer is moved to the next node in the list.
Purpose: This bypasses the first node, effectively making the second node the new head.


4. delete ptr;
The node stored in ptr (the original first node) is deallocated using delete.
Purpose: Frees the memory of the deleted node to avoid memory leaks.

*/

/*
output
1 2 3
2 3 

*/
