#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	
	int year;
	struct node * next;
	
	}node;
int main(){
	
	//allocating memory for nodes in the heap;
	node*first_node=(node*)malloc(sizeof(node));
	node*second_node=(node*)malloc(sizeof(node));
	node*third_node=(node*) malloc(sizeof (node));
	node*fourth_node=(node*)malloc (sizeof(node));
	
	
	//first node data part and connecting it to second node;
	first_node->year=2001;
	first_node->next=second_node;
	
	//second node;
	second_node -> year = 2002;
	second_node -> next = third_node;
	
	//third node;
	third_node -> year = 2003;
	third_node -> next = fourth_node;
	
	//fourth node;
	fourth_node -> year = 2004;
	fourth_node -> next =NULL;
	
	
	//Temporary pointer to traverse the list
	node* temp_p=first_node;
	
	//printing the data from the link-list;
	while(temp_p != NULL){
		printf("%d  ",temp_p->year);
		temp_p = temp_p->next;
	
	}
	
	free(first_node);
	free(second_node);
	free(third_node);
	free(fourth_node);
	
	
	
	return 0;
	}
