#include <stdio.h>
#include <stdlib.h>
# define SIZE 5
void enqueue();
void dequeue();
void show();
int isEmpty();
int isFull();
int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;
int main()
{
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("5. Empty check\n");
        printf("6. Full check\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            case 5:
            isEmpty();
            case 6:
            isFull();
            default:
            printf("Incorrect choice \n");
        } 
    } 
    return 0;
} 
 
void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("\n Element to be inserted in the Queue : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
} 
 
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("\n Element deleted from the Queue: %d", inp_arr[Front]);
        Front = Front + 1;
    }
} 
 
void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}

int isEmpty(){
    if (Front == - 1){
        printf("Yes queue is empty \n");
    }
    else{
        printf("Sorry!!  queue is not empty \n");
    }
}

int isFull(){
    if (Rear == SIZE - 1){
        printf("Sorry!!  queue is full \n");
    }
    else{
        printf("Yes queue is not full \n");
    }
}





































// #include <stdio.h>  
// #define SIZE 4
// int a[SIZE];
// int front=-1;
// int rear=-1;
// void enqueue();
// void dequeue();
// int isFull();
// int isEmpty();
// void exit();
// void display();

// int main(){
    
//      int ch;
//      while(1){
//      printf("\nEnter your choice : ");
//      scanf("%d",&ch);
//      switch(ch){
//        case 1:enqueue();break;
//        case 2:dequeue();break;
//        case 3:display();break;
//        case 4:exit(0);break;
//        default:
//               printf("invalid choice . ");
//      }
// }

// }

// void enqueue(){
//     int data;
//     if(isFull()){
//            printf("overflow");
//     }
//     else if(isEmpty()){
//         front=0;
//     }
//     else{
//         printf("Enter element : ");
//         scanf("%d",&data);
//         rear++;
//         a[rear]=data;
//     }
// }
// void dequeue(){
//     if(isFull()){
//         printf("\n Overflow.");
//     }
//     else{
//     printf("\ndequeued element is %d :",a[front]);
//     front++;
//     }
// }

// int  isFull(){
//     if(front==-1 && rear==SIZE-1)
//     return 1;

//     else
//     return -1;
// }

// int isEmpty(){
//     if(rear==-1)
//     return 1;
// else
//     return -1;
// }

// void display(){
//     int i;
//     if(isEmpty()){
//         printf("\n Queue is empty .");
//     }
//     else
//     {
//         printf("\nElements :");
//         for(i=front;i<=rear;i++){
//             printf("%d",a[i]);
//         }
//     }
// }