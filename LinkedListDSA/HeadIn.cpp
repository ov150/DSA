// #include<iostream>
// #include <iostream>
// using namespace std;

// class node{
//     public:
//         int data;
//         node* link;

//         node(int value){
//             data = value;
//             link = NULL;
//         }

// };

// void insertAthead(node* &head, int value){
//     node* newNode = new node(value);
//     newNode->link = head;
//     head = newNode;
// }
// void display(node* head){
//     node* pointer = head;
//     while(pointer!=NULL){
//         cout<<"linked list : ";
//         cout<<pointer->data<<" "<<endl;
//         pointer = pointer->link;

//     }
// }
// int main(){
//     node* head = NULL;
//     insertAthead(head, 5);   
//     insertAthead(head, 10);
//     insertAthead(head, 20);

//     display(head);
//     return 0;
// }



#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* link;

    node(int value) {
        data = value;
        link = NULL;
    }
};

void insertAtHead(node* &head, int value) {
    node* newNode = new node(value);
    newNode->link = head;
    head = newNode;
}

void insertAtIndex(node* &head, int value, int index) {
    if (index == 0 || head == NULL) {
        insertAtHead(head, value);
        return;
    }

    node* newNode = new node(value);
    node* current = head;
    for (int i = 0; i < index - 1 && current->link != NULL; i++) {
        current = current->link;
    }
    newNode->link = current->link;
    current->link = newNode;
}

void display(node* head) {
    node* pointer = head;
    while (pointer != NULL) {
        cout << "Linked list: ";
        cout << pointer->data << " " << endl;
        pointer = pointer->link;
    }
}

int main() {
    node* head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    cout<<"Before insert node"<<endl;
    display(head);
    insertAtIndex(head, 15, 1); // Inserting 15 at index 1
    cout<<"After insert node"<<endl;
    display(head);
    return 0;
}
