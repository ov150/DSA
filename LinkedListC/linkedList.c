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

    linkedListTraversal(head);

    return 0;
}
