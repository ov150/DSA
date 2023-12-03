#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }

}
struct Node * begIn(struct Node *head, int data){
    struct Node * newNode;
    newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->next = head;
    newNode->data = data;
    return newNode;
}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fouth;

    head = (struct  Node *) malloc(sizeof(struct Node));
    second = (struct  Node *) malloc(sizeof(struct Node));
    third = (struct  Node *) malloc(sizeof(struct Node));
    fouth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;



    third->data = 66;
    third->next = fouth;

    fouth->data = 41;
    fouth->next = NULL;

    printf("\nAll elements before adding : \n");
    linkedListTraversal(head);
    head = begIn(head, 56);
    printf("\nAfter add new node at the beginnig : \n");
    linkedListTraversal(head);

    return 0;
}



// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node * next;
// };

// void linkedListTraversal(struct Node *ptr){
//     while(ptr!=NULL){
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }

// }
// struct Node * begIn(struct Node *head, int data){
//     struct Node * newNode;
//     newNode = (struct Node *) malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;

//     newNode->next = head;
//     head = newNode;

//     return newNode;
// }

// int main(){

//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fouth;

//     head = (struct  Node *) malloc(sizeof(struct Node));
//     second = (struct  Node *) malloc(sizeof(struct Node));
//     third = (struct  Node *) malloc(sizeof(struct Node));
//     fouth = (struct Node *) malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 11;
//     second->next = third;



//     third->data = 66;
//     third->next = fouth;

//     fouth->data = 41;
//     fouth->next = NULL;

//     // head->next->next->next = fouth;
//     head->next = second;
//     second->next = third;
//     third->next = fouth;



//     int data = 5;

//     printf("\nAll elements before adding : \n");
//     linkedListTraversal(head);
//     fouth = head;
//     head = begIn(head, data);
//     printf("\nAfter add new node at the beginnig : \n");
//     linkedListTraversal(head);

//     return 0;
// }