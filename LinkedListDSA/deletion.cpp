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
// void deletion(node* head, int value){
//     if(head==NULL){
//         return;
//     }
//     // if(head->link==NULL){
//     //     // deletionAthead(head);
//     //     return;
//     // }
//     node* pointer = head;

//     while(pointer->link->data!=value){
//         pointer = pointer->link;

//     }
//     node* deleteTheNode = pointer->link;
//     pointer->link= pointer->link->link;

//     delete deleteTheNode;

// }

void deleteAtend(node* &head){
    node* pointer = head;
    while(pointer->link->link!=NULL){
        pointer = pointer->link;
    }
    node* deleteTheNode = pointer->link;
    pointer->link = NULL;
    delete deleteTheNode;
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
    cout<<"before deletion : "<<endl;
    display(head);
    deleteAtend(head);
    cout<<"after deletion : "<<endl;
    display(head);

    return 0;
}