#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int value) {
    node* newNode = new node(value);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(node* &head, int value) {
    if (head == NULL) {
        insertAtHead(head, value);
        return;
    }
    node* newNode = new node(value);
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp; // Update the prev pointer of the new node
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next; // Move the temp pointer to the next node
    }
    cout << endl;
}
// void deletedAtHead(node* &head){
//     node* pointer = head;
//     head = head->next;
//     head->prev = NULL;

// }
// void deletion(node* &head, int pos){
//     if(pos == 1){
//         deleteAtHead(head);
//         return;
//     }
//     node* temp = head;
//     int count=0;
//     while(temp!=NULL && count!=pos){
//         temp = temp->next;
//     }
//     temp->prev->next = temp->next;
//     if(temp->next!=NULL){
//         temp->next->prev = temp->prev;
//     }

//     delete temp;
// }
int main() {
    node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    display(head);
    // insertAtHead(head, 4);
    // insertAtHead(head, 14);
    // insertAtHead(head, 24);
    // display(head);
    // deletion(head, 3);
    display(head);
    return 0;
}


