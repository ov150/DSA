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
bool searching(node* &head, int key){
    node* pointer = head;
    while(pointer!=NULL){
        if(pointer->data==key){
            return true;
        }
        pointer = pointer->link;
    }
    return false;
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
    cout<<searching(head, 20);
    return 0;
}