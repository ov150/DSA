#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

    node(int value){
        data = value;
        next= NULL;
        prev= NULL;
    }

};

void insertAtHead(node* &head, int value){
    node* newNode = new node(value);
    newNode->next= head;
    if(head!=NULL){
        head->prev = newNode;   
    }
    head = newNode;
}
void insertAtEnd(node* &head, int value){

    if(head==NULL){
        insertAtHead(head, value);
        return;
    }
    node* newNode = new node(value);
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;

    }
    temp->next = newNode;
    newNode->next = temp;

}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<"Linked list : ";
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;


}
int main(){
    node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    display(head);
    insertAtHead(head, 4);
    insertAtHead(head, 14);
    insertAtHead(head, 24);
    display(head);
    
    return 0;
}
