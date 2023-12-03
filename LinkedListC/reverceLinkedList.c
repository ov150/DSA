#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;
};


void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr = ptr->link;
    }
}

struct Node *reverse(struct Node *head){
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while(head!=NULL){
        next= head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}
int main(){
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    first = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    first->data = 21;
    first->link = second;

    second->data = 31;
    second->link = third;

    third->data = 41;
    third->link = fourth;

    fourth->data = 51;
    fourth->link = NULL;

    printf("\nAll elements before reverse : \n");
    traversal(first);
    first = reverse(first);
    printf("\nAll elements after reverse : \n");
    traversal(first);

    return 0;

}


#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
void reverseLinkedList(struct Node** head) {
    struct Node* previous = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        // Store the next node
        next = current->next;

        // Reverse the link
        current->next = previous;

        // Move pointers one step ahead
        previous = current;
        current = next;
    }

    // Update the head pointer to the last node
    *head = previous;
}

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Original Linked List: ");
    displayLinkedList(head);

    // Reverse the linked list
    reverseLinkedList(&head);

    printf("Reversed Linked List: ");
    displayLinkedList(head);

    return 0;
}

























// void traversal(struct Node * ptr){
//     while(ptr!=NULL){
//         printf("Elements : %d\n",ptr->data);
//         ptr = ptr->next;
//     }
// }



// int main(){
//     struct Node * first;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fourth;

//     first = (struct Node *) malloc(sizeof(struct Node));
//     second = (struct Node *) malloc(sizeof(struct Node));
//     third = (struct Node *) malloc(sizeof(struct Node));
//     fourth = (struct Node *) malloc(sizeof(struct Node));

//     first->data = 21;
//     first->next = second;

//     second->data = 31;
//     second->next = third;

//     third->data = 41;
//     third->next = fourth;

//     fourth->data = 51;
//     fourth->next = NULL;

//     printf("\nAll elements before adding : \n");
//     traversal(first);
//     first = delFir(first);
//     printf("\nAfter add new node at the beginnig : \n");
//     traversal(first);

//     return 0;

// }