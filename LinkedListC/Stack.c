#include<stdio.h>
#include<stdlib.h>
#define n 10

int top = -1;
int stack[n];

void push();
void pop();
void dispaly();


int main(){
    int a;
    while(1){
        printf("\n");
        printf("1: push\n");
        printf("2: pop\n");
        printf("3: display\n");

        printf("\nChoose the option :");
        scanf("%d",&a);
        switch(a){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: dispaly(); break;
            case 4: exit(0);
            default:printf("\n Please choose correct one...");

        }

    }

    return 0;
}

void push(){
    if(top == n-1){
        printf("\nAlready full ");
    }

    int x;
    printf("\nEnter the element to insert : ");
    scanf("%d", &x);
    top++;
    stack[top] =x;
}
void pop(){
    if(top == -1){
        printf("\nSorry... no element to POP");
    }
    printf("Element POPED");

    top--;

}

void dispaly(){
    if(top == -1){
        printf("Sorry... no element to POP");
    }


    printf("\n Elements Are   ");
    for(int i=top; i>=0; i--){
        printf("%d ",stack[i]);
    }
}