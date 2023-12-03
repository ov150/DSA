// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure of a node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node with the given data
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed!\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a new node at the end of the linked list
// // void insertAtEnd(struct Node** head, int data) {
// //     struct Node* newNode = createNode(data);
// //     if (*head == NULL) {
// //         *head = newNode;
// //     } else {
// //         struct Node* temp = *head;
// //         while (temp->next != NULL) {
// //             temp = temp->next;
// //         }
// //         temp->next = newNode;
// //     }
// // }
//     struct Node * endIn(struct Node *head, int data){
//         struct Node * newNode;
//         newNode = createNode(data);
//         newNode->data = data;
//         struct Node *p = head;
//         while (p->next!=NULL){
//             p = p->next;
//         }
//         p->next = newNode;
//         newNode->next = NULL;
        
//         return head;
//     }




// // Function to print the linked list
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Function to free the memory allocated for the linked list
// void freeList(struct Node* head) {
//     struct Node* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }

// int main() {
//     struct Node* head = NULL;
//     // insertAtEnd(&head, 10);
//     // insertAtEnd(&head, 20);
//     // insertAtEnd(&head, 30);
//     // insertAtEnd(&head, 40);
//     endIn(head, 50);
//     endIn(head, 70);
//     printf("Linked List: ");
//     printList(head);

//     // Free the memory used by the linked list
//     freeList(head);

//     return 0;
// }








// // #include<stdio.h>
// // #include<stdlib.h>

// // struct Node{
// //     int data;
// //     struct Node * next;
// // };

// // void traversal(struct Node * ptr){
// //     while(ptr!=NULL){
// //         printf("Elements : %d\n",ptr->data);
// //         ptr = ptr->next;
// //     }
// // }

// // struct Node * delFir( struct Node * head){
// //     struct Node * temp;
// //     temp = head->next;
// //     head->next = temp->next;
// //     free(temp);
// //     temp = NULL;
// //     return head;
// // };



// // int main(){
// //     struct Node * first;
// //     struct Node * second;
// //     struct Node * third;
// //     struct Node * fourth;
// //     struct Node * last = NULL;

// //     first = (struct Node *) malloc(sizeof(struct Node));
// //     second = (struct Node *) malloc(sizeof(struct Node));
// //     third = (struct Node *) malloc(sizeof(struct Node));
// //     fourth = (struct Node *) malloc(sizeof(struct Node));

// //     first->data = 21;
// //     first->next = second;

// //     second->data = 31;
// //     second->next = third;

// //     third->data = 41;
// //     third->next = fourth;

// //     fourth->data = 51;
// //     fourth->next = NULL;

// //     last = first;
// //     printf("\nAll elements before adding : \n");
// //     traversal(first);
// //     last = delFir(first);
// //     printf("\nAfter add new node at the beginnig : \n");
// //     traversal(first);

// //     return 0;

// // }




// // #include <stdio.h> 
// // #include <stdlib.h>

// // struct node {
// //     int data; 
// //     struct node* next; 
// // };

// // struct node* addToEmpty(int data) 
// // { 
// //     struct node* temp = malloc(sizeof(struct node)); 
// //     temp->data = data; 
// //     temp->next = temp; 
// //     return temp; 
// // }

// // struct node* addAtEnd(struct node* tail, int data)
// // { 
// //     struct node* newP = malloc(sizeof(struct node)); 
// //     newP->data = data; 
// //     newP->next = NULL;

// //     newP->next = tail->next; 
// //     tail->next = newP; 
// //     tail = tail->next; 
// //     return tail; 
// // } 

// // struct node* createList(struct node* tail) 
// // {
// //     int i, n, data; 
// //     printf("Enter the number of nodes of the linked list: "); 
// //     scanf("%d", &n); 

// //     if (n == 0) 
// //         return tail; 
// //     printf("Enter the element 1: "); 
// //     scanf("%d", &data); 
// //     tail = addToEmpty(data); 

// //     for(i=1; i<n; i++) 
// //     { 
// //         printf("Enter the element %d: ", i+1); 
// //         scanf("%d", &data); 
// //         tail = addAtEnd(tail, data);
// //     }   
// //     return tail; 
// // }

// // void print(struct node* tail) 
// // {
// //     if(tail == NULL) 
// //         printf("No node in the list."); 
// //     else{ 
// //     struct node* p = tail->next; 
// //     do
// //     { 
// //         printf("%d ", p->data); 
// //         p = p->next; 
// //     } while(p!=tail->next); 
// //     }   
// //     printf("\n"); 
// // }

// // struct node* delFirst(struct node* tail)
// // { 
// //     if(tail == NULL) 
// //         return tail; 
// //     if(tail->next == tail)
// //     {
// //         free(tail); 
// //         tail = NULL; 
// //         return tail; 
// //     }
// //     struct node* temp = tail->next; 
// //     tail->next = temp->next; 
// //     free(temp); 
// //     temp = NULL; 
// //     return tail;  
// // }

// // int main() 
// // {
// //     struct node* tail = NULL; 
// //     tail = createList(tail); 
// //     printf("\nList before Deletion: "); 
// //     print(tail);

// //     tail = delFirst(tail); 
// //     printf("List after Deletion: "); 
// //     print(tail); 
// //     return 0; 
// // }





#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to modify the head pointer using a single pointer
void modifyHeadSinglePointer(struct Node* head) {
    // This will not modify the head pointer outside the function
    head = head->next;
}

// Function to modify the head pointer using a double pointer
void modifyHeadDoublePointer(struct Node** head) {
    // This will modify the head pointer outside the function
    *head = (*head)->next;
}

int main() {
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = NULL;

    struct Node* head = node1;

    // Using a single pointer - head won't change
    // modifyHeadSinglePointer(head);
    // printf("Using single pointer: %d\n", head->data); // Output: 10

    // Using a double pointer - head will change
    // modifyHeadDoublePointer(&head);
    // printf("Using double pointer: %d\n", head->data); // Output: 20

    free(node1);
    free(node2);

    return 0;
}
