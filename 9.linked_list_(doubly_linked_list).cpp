#include <iostream>
using namespace std;

typedef struct dnode {
    struct dnode* prev;
    int data;
    struct dnode* next;
} dnode;

int main() {
    // Creation of nodes
    dnode* head = new dnode;
    dnode* second = new dnode;
    dnode* third = new dnode;
    dnode* fourth = new dnode;

    // Adding data to the nodes
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    // Setting up the connections
    head->prev = NULL;
    head->next = second;
    
    second->prev = head;
    second->next = third;
    
    third->prev = second;
    third->next = fourth;
    
    fourth->prev = third;
    fourth->next = NULL;

    // Traversing the list and printing data
    dnode* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}
