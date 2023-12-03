// #include <stdio.h> 
// #include <stdlib.h> 

// struct node { 
//     int data; 
//     struct node* next;
// };

// struct node* addToEmpty(int data)
// { 
//     struct node* temp = malloc(sizeof(struct node)); 
//     temp->data = data; 
//     temp->next = temp; 
//     return temp; 
// } 

// struct node* addAtBeg(struct node* tail, int data)
// { 
//     struct node* newP = malloc(sizeof(struct node)); 
//     newP->data = data; 
//     newP->next = tail->next; 
//     tail->next = newP; 
//     return tail; 
// }

// void print(struct node* tail)
// { 
//     struct node* p = tail->next; 
//     do
//     { 
//         printf("%d ", p->data); 
//         p = p->next;
//     } while(p!=tail->next); 
// }

// int main()
// { 
//     struct node* tail; 
//     tail = addToEmpty(45); 
//     tail = addAtBeg(tail, 34); 
    
//     print(tail); 
//     return 0; 
// }





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


struct Node *atTheBeg(struct Node * head, int data){
    struct Node *temp_ptr;
    temp_ptr = (struct  Node *) malloc(sizeof(struct Node));
    temp_ptr->data= data;
    temp_ptr->next = head->next;
    head->next=temp_ptr;
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

    last = atTheBeg(head, 60);
    
    traverse(last);

    return 0;
}
