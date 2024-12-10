
#include <stdio.h>
#include <stdlib.h>

/* 
struct node {
    int info;
    struct node *link;
};
struct node *first = NULL;

void create();
void display();
void delete_Beg();
void delete_End();

int main() {
    create();
    printf("\nThe linked list is:\n");
    display();
    // delete_Beg();
    // delete_End();
    display();
    return 0;
}

void create() {
    struct node *ptr, *start;
    char ch;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Input first node info: ");
    scanf("%d", &value);
    ptr->info = value;
    ptr->link = NULL;
    first = ptr;
    do {
        printf("Do you want to add another node? (Y/N): ");
        getchar(); 
        ch = getchar();
        if (ch == 'Y' || ch == 'y') {
            start = (struct node *)malloc(sizeof(struct node));
            if (start == NULL) {
                printf("Memory allocation failed!\n");
                return;
            }
            printf("Input next node info: ");
            scanf("%d", &value);
            start->info = value;
            start->link = NULL;
            ptr->link = start;
            ptr = start;
        }
    } while (ch == 'Y' || ch == 'y');
    ptr->link = NULL;
}

void display() {
    struct node *temp = first;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");
}


void delete_Beg(){
struct node *ptr;
if(first==NULL){
    printf("underflow");
    return;
}
ptr=first;
first=ptr->link;
free(ptr);
}
void delete_End(){
    struct node *ptr,*previous;
    if(ptr=NULL){
        printf("underflow");
        return;
    }
    ptr=first;
    while(ptr->link!=NULL){
        previous=ptr;
        ptr=ptr->link;
    }
    previous->link=NULL;
    free(ptr);
}

*/


// Circular Link list


#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Global pointer for the head of the circular linked list
struct Node* head = NULL;

// Function to insert a node at the beginning
void insertAtBeginning(int newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    // If the list is empty, point the new node to itself
    if (head == NULL) {
        newNode->next = newNode; // Circular link to itself
        head = newNode;
    } else {
        // Find the last node (node pointing back to the head)
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        // Insert the new node at the beginning
        newNode->next = head;
        temp->next = newNode; // Update the last node's next pointer
        head = newNode;      // Update head to the new node
    }
}

// Function to display the circular linked list
void displayList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Main function
int main() {
    // Insert some elements
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    // Display the list
    printf("Circular Linked List: ");
    displayList();

    return 0;
}
