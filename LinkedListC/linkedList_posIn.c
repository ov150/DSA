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
// struct Node * posIn(struct Node *head,int index, int data){
//     struct Node * newNode;
//     newNode = (struct Node *) malloc(sizeof(struct Node));
//     struct Node * p = head;
//     int i= 0;
//     while(i!=(index-1)){
//         p = p->next;
//         i++;
//     }
//     newNode->data = data;
//     newNode->next = p->next;
//     p->next = newNode;
//     return head;
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

//     printf("\nAll elements before adding : \n");
//     linkedListTraversal(head);
//     head = posIn(head, 3, 56);
//     printf("\nAfter add new node at the specific position : \n");
//     linkedListTraversal(head);

//     return 0;
// }



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
// struct Node * posIn(struct Node *head,int index, int data){
//     struct Node * newNode;
//     newNode = (struct Node *) malloc(sizeof(struct Node));
//     struct Node * p = head;
//     int i= 0;
//     while(i!=(index-1)){
//         p = p->next;
//         i++;
//     }
//     newNode->data = data;
//     newNode->next = index;
//     newNode->next = p->next;
//     p->next = newNode;
//     return head;
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

//     int data = 5;
//     int  index = 3;

//     printf("\nAll elements before adding : \n");
//     linkedListTraversal(head);
//     head = posIn(head,index,data);
//     printf("\nAfter add new node at the specific position : \n");
//     linkedListTraversal(head);

//     return 0;
// }