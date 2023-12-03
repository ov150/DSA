#include<iostream>
#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* link;

        node(int value){
            data = value;
            link = NULL;
        }

};

void inserAtTail(node* &head, int value){
    node* newNode = new node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    node* pointer = head;
    while(pointer->link!=NULL){
        pointer = pointer->link;
    }
    pointer->link = newNode;
}
void display(node* head){
    node* pointer = head;
    while(pointer!=NULL){
        cout<<"linked list : ";
        cout<<pointer->data<<" "<<endl;
        pointer = pointer->link;

    }
}
int main(){
    node* head = NULL;
    inserAtTail(head, 5);
    inserAtTail(head, 10);
    inserAtTail(head, 20);
    inserAtTail(head, 25);
    inserAtTail(head, 30);
    inserAtTail(head, 35);


    display(head);
    return 0;
}