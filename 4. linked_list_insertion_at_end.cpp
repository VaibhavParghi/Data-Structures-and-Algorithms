#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node * next;
}node;


///function to insert new node at end of list ;
//its important to pass head pointer By Reference;
void insert_end(node*& head , int data){
    node* new_node= new node;
    new_node->data=data;
    //pointer to navigate till end node; which will start from start and go till end;
    node* p=head;

  ///loop will run until the p->next is not NULL , if its null that means we are on last node
    while(p-> next !=NULL){
        p=p->next;
    }
    
    //connecting existing last node to new node;
    p->next = new_node;
    
    ///making new node as new last node;
    new_node->next=NULL;
}




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
    

    
    insert_end(head,444);
    print_list(head);
    
  
    return 0;
}
