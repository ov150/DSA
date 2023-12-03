#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traverse(struct Node* head) {
  struct Node* ptr = head;
  do {
  printf(" Element : %d \n ", ptr->data);
  ptr = ptr->next;

  } while (ptr != head);
}

struct Node * posIn(struct Node * head, int index, int data){
    struct Node *p = head->next;
    struct Node *newNode;
    newNode = (struct  Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    while(index>1){
        p = p->next;
        index--;
    }

    newNode->next = p->next;
    p->next = newNode;
    if(p==head){
        head = head->next;
    }

    return head;


}

int main(){

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fouth;
    struct Node * last = NULL;

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


    last = head;

    last = posIn(head, 1 , 2);
    traverse(last);

    return 0;
}


