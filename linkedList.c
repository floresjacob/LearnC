#include <stdio.h>
#include <stdlib.h>

// Function declarations (forward declarations)
struct Node* createNode(int data);
void append(struct Node** head_ref, int new_data);
void printList(struct Node* node);

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a new node at the beginning
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (new_node == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        exit(1);
    }

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = createNode(new_data);

    // Check if memory allocation was successful
    if (new_node == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        exit(1);
    }

    struct Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printf("Linked list: ");
    printList(head);

    return 0;
}
