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

    // Setting up the connections for a circular doubly linked list
    head->prev = fourth;   // Head's prev points to the last node (fourth)
    head->next = second;   // Head's next points to the second node

    second->prev = head;   // Second's prev points to the first node (head)
    second->next = third;  // Second's next points to the third node

    third->prev = second;  // Third's prev points to the second node
    third->next = fourth;  // Third's next points to the fourth node

    fourth->prev = third;  // Fourth's prev points to the third node
    fourth->next = head;   // Fourth's next points back to the head (making it circular)

    // Traversing the circular doubly linked list and printing data using while loop
    dnode* ptr = head;
    if (ptr != NULL) {
        while (true) {
            cout << ptr->data << " ";
            ptr = ptr->next;
            if (ptr == head) break;  // Stop when we come back to the head
        }
    }

    return 0;
}
