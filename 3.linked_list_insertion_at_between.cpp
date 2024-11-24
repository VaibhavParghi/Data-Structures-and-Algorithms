#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node * next;
}node;


///insertion at start 
void insert_start(node*& head , int data){
    node* new_node=new node;
    new_node->data=data;
    
    new_node->next=head;
    head=new_node;
}


///insertion between two nodes;
void insert_between(node*& head , int data, int node_position){
    node* new_node=new node;
    new_node->data=data;
    int count=0;
   
     node * p=head;
     while(p!=NULL && count<node_position-1){
         p=p->next;
         count++;
     }
     
     new_node->next = p->next;
     p->next=new_node;
     
     
    
}




///fucntion to print the linked list;
void print_list(node* head){
    node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head=new node;
    node* second = new node;
    
    head->data=111;
    second->data=222;
    
    head->next=second;
    second->next=NULL;
    
    insert_start(head,110);
    
    print_list(head);
    cout<<"\n";
    
    insert_between(head , 333,3);
    print_list(head);
    return 0;
} 
/*
                                                                       Explanation

 

Indexing in Linked List:

 indexing starts from 0.
110 is at index 0, 111 is at index 1, and 222 is at index 2.


What happens at index 2?

We traverse the list to reach index 1 (node with 111), because we want to insert after it.
The node currently at index 2 (222) is shifted forward to index 3.
The new node (12) is inserted at index 2.
Final List:

110 → 111 → 12 → 222 → NULL.
 the new node replaces the original 222 at index 2, making it index 3. 



We use a pointer to "walk" through the nodes because we can't directly jump to a specific node due to the non-contiguous nature of linked lists.


Sequential Access:
To access a specific node, we must start from the head and follow the next pointers sequentially until we reach the desired node.
Nodes are not stored in contiguous memory (unlike arrays), so we can't use indexing directly.


Pointer Enables Navigation:

A pointer (like p in your code) "moves" along the nodes by updating itself to point to p->next.
This lets us traverse the list without losing the original head.
*/
