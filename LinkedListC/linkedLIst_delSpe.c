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
struct Node * delAfterNode(struct Node *head,int value){
    struct Node * newNode = head;
    struct Node * deleted = head->next;
    int i= 0;
    while(deleted->data!=value && deleted->next!=NULL){
        newNode = newNode->next;
        deleted = deleted->next;
        i++;
    }
    if(deleted->data== value){
        newNode->next = deleted->next;
        free(deleted);
    }
    
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
    linkedListTraversal(head);
    head = delAfterNode(head,11);
    printf("\nAfter deleted new node at the specific position : \n");
    linkedListTraversal(head);

    return 0;
}