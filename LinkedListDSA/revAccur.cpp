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
node* reverse(node* &head){
    node* prevPtr = NULL;
    node* currentPtr = head;
    node* nextPtr;

    while(currentPtr!=NULL){
        nextPtr = currentPtr->link; 
        currentPtr->link = prevPtr;

        prevPtr = currentPtr;
        currentPtr = nextPtr;
    }
    return prevPtr;
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
    node* newHead = reverse(head);
    cout<<"Element reversed"<<endl;
    display(newHead);
    return 0;
}