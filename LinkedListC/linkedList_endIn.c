#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf(" Elements :%d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * endIn(struct Node *head, int data){
    struct Node * newNode;
    newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *p = head;
    while (p->next!=NULL){
        p = p->next;
    }
    p->next = newNode;
    newNode->next = NULL;
    
    return head;
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
    traversal(head);
    head = endIn(head, 56);
    printf("\nAfter add new node at the end : \n");
    traversal(head);

    return 0;
}