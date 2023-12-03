#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100

char stack[max];
char infix[max], postFix[max];
int top = -1;

void push(char);
char pop(); 
int isEmpty();
void infixToPostFix();
int space(char);
void print();
int precedence(char);


int main(){
    printf("Enter the infix expression : ");
    gets(infix);

    infixToPostFix();
    print();
    return 0;
}

void infixToPostFix(){
    int i,j=0;
    char symbol,next;
    for(i=0;i<strlen(infix)+1;i++){
        symbol = infix[i];
        if(!space(symbol)){
            switch(symbol){
                case '(': push(symbol); break;
                case ')': 
                    while((next = pop()) !='('){
                        postFix[j++] = next;
                    } break;
                case '+' :
                case '-' :
                case '*' :
                case '/' :
                case '^' :
                    while(!isEmpty() && precedence(stack[top]) >= precedence(symbol)){
                        postFix[j++] = pop();
                    }
                    push(symbol); break;

                default:
                    postFix[j++] = symbol;
                }

            }
        
    }
    while(!isEmpty()){
        postFix[j++] = pop();
    }
    postFix[j] = '\0';
}

int space(char c){
    if(c==' ' || c=='\t'){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char symbol){
    switch(symbol){
        case '^' : return 3;
        case '/' : 
        case '*' : return 2;
        case '+' : 
        case '-' : return 1;
        defaul : return 0;
    }
}

void print(){
    int i=0;
    printf("The postfix expression is : ");
    while(postFix[i]){
        printf("%c", postFix[i++]);
    }
    printf("\n");
}

void push(char c){
    if(top == max-1){
        printf("stack is overflow");
        return;
    }
    top++;
    stack[top]= c;
}

char pop(){
    char c;
    if(top == -1){
        printf("Stack underflow\n");
        exit(1);
    }
    c= stack[top];
    top--;
    return c;
}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

