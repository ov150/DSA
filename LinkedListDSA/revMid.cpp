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
node* reverseK(node* &head, int k){
    node* prevPtr = NULL;
    node* currentPtr = head;
    node* nextPtr;

    int count = 0;
    while(currentPtr!=NULL && count<k){
        nextPtr=currentPtr->link;
        currentPtr->link = prevPtr;

        prevPtr = currentPtr;
        currentPtr = nextPtr;
        count++;
    }
    if(nextPtr!=NULL){
            head->link =  reverseK(nextPtr, k);
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

    int k =2;
    node* anotherHead = reverseK(head,k);
    cout<<"Element reversed"<<endl;
    display(anotherHead); 
    return 0;
}