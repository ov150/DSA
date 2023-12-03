// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node * next;
// };

// void traverse(struct Node* head) {
//   struct Node* ptr = head;
//   do {
//   printf(" Element : %d \n ", ptr->data);
//   ptr = ptr->next;

//   } while (ptr != head);
// }

// int main(){

//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * fouth;
//     struct Node * last = NULL;

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


//     last = head;

//     traverse(last);

//     return 0;
// }





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

// struct node* addAtEnd(struct node* tail, int data) 
// {
//     struct node* newP = malloc(sizeof(struct node)); 
//     newP->data = data; 
//     newP->next = NULL;

//     newP->next = tail->next; 
//     tail->next = newP; 
//     tail = tail->next; 
//     return tail; 
// }

// struct node* createList(struct node* tail) 
// { 
//     int i, n, data; 
//     printf("Enter the number of nodes of the linked list: "); 
//     scanf("%d", &n); 
    
//     if(n == 0) 
//         return tail; 
//     printf("Enter the element 1: "); 
//     scanf("%d", &data); 
//     tail = addToEmpty(data); 

//     for(i=1; i<n; i++) 
//     { 
//         printf("Enter the element %d: ", i+1); 
//         scanf("%d", &data); 
//         tail = addAtEnd(tail, data); 
//     }
//     return tail; 
// } 

// void print(struct node* tail) 
// { 
//     if(tail == NULL) 
//         printf("No node in the List."); 
//     else {
//     struct node* p = tail->next; 
//     do 
//     {
//         printf("%d ", p->data); 
//         p = p->next; 
//     } while(p!=tail->next);
//     } printf("\n"); 
// }

// int main()
// { 
//     struct node* tail = NULL; 
//     tail = createList(tail); 
//     print(tail); 
//     return 0; 
// }