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
void deletionAthead(node* &head){
    node* deleteTheNode = head;
    head= head->link;

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
    cout<<"Before head deletion "<<endl;
    display(head);
    deletionAthead(head);
    cout<<"After head deletion "<<endl;
    display(head);
    return 0;
}