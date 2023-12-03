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

void insertAthead(node* &head, int value){
    node* newNode = new node(value);
    newNode->link = head;
    head = newNode;


}

node* reverseRecursion(node* &head){
    
    if(head==NULL || head->link==NULL){
        return head;
    }
    node* newHead = reverseRecursion(head->link);
    head->link->link = head;
    head->link = NULL;

    return newHead;
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
    insertAthead(head, 5);
    insertAthead(head, 10);
    insertAthead(head, 20);

    display(head);
     
    node* anotherHead = reverseRecursion(head);
    cout<<"Element reversed"<<endl;
    display(anotherHead);
    return 0;
}