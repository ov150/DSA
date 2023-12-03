#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Elements : %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node * delFir( struct Node * head){
    struct Node * newNode = head;
    head = head->next;
    free(newNode);

    return head;
};



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
    first->next = second;

    second->data = 31;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 51;
    fourth->next = NULL;

    printf("\nAll elements before adding : \n");
    traversal(first);
    first = delFir(first);
    printf("\nAfter add new node at the beginnig : \n");
    traversal(first);

    return 0;

}