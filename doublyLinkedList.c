#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node *insertfront(struct Node * head, int data){
    struct Node * p = head;
    struct Node * new = (struct Node *)malloc (sizeof(struct Node));
    new->data = data;
    new->prev = NULL;
    new->next = head;
    head->prev = new;  

    return new;  
}
struct Node * insertionAtEnd(struct Node *head, int data){
    struct Node * new = (struct Node *) malloc(sizeof(struct Node));
    new->data = data;
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next!= NULL){
        p = p->next;
        q = q->next;
    }
    q->next = new;
    new->prev = q;
    new->next = NULL;
    return head;
}
// Function to insert a new node at the end of the doubly linked list
void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;

    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    newNode->prev = last;
}
struct Node* deleteend(struct Node* head){
struct Node *p=head;
struct Node *q=head->next;
while(q->next != NULL){
    p = p->next;
    q = q->next;
}

p->next =NULL;
free(q);
return head;
}

void deleteBeforePosition(struct Node** head, int position) {
    if (*head == NULL || position <= 1) {
        printf("Invalid position or empty list.\n");
        return;
    }

    struct Node* current = *head;
    int count = 1;

    // Traverse the list to find the node before the specified position
    while (current->next != NULL && count < position - 1) {
        current = current->next;
        count++;
    }

    // If the position is beyond the length of the list
    if (count < position - 1 || current->prev == NULL) {
        printf("Position not found.\n");
        return;
    }

    // Adjust pointers to delete the node before the specified position
    struct Node* nodeToDelete = current->prev;
    current->prev = nodeToDelete->prev;

    if (nodeToDelete->prev != NULL)
        nodeToDelete->prev->next = current;

    free(nodeToDelete);
}

// Function to print the doubly linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d <-> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function for testing
int main() {
    struct Node* head = NULL;

    // Insert some nodes at the end
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Original Doubly Linked List:\n");
    printList(head);

    // Delete a node before the specified position (e.g., position 3)
    deleteBeforePosition(&head, 4);

    printf("\nDoubly Linked List after deletion:\n");
    printList(head);

    printf("insert at front \n" );
    head = insertfront(head, 23);
    printList(head);

    printf("insert at last \n");
    head = insertionAtEnd(head, 24);
    printList(head);

    printf("delete end \n ");
    head = deleteend(head);
    printList(head);

    return 0;
}