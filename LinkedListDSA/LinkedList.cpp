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

// void inserAtTail(node* &head, int value){
//     node* newNode = new node(value);
//     if(head == NULL){
//         head = newNode;
//         return;
//     }
//     node* pointer = head;
//     while(pointer->link!=NULL){
//         pointer = pointer->link;
//     }
//     pointer->link = newNode;
// }

// bool searching(node* &head, int key){
//     node* pointer = head;
//     while(pointer!=NULL){
//         if(pointer->data==key){
//             return true;
//         }
//         pointer = pointer->link;
//     }
//     return false;
// }
// void deletionAthead(node* &head){
//     node* deleteTheNode = head;
//     head= head->link;

//     delete deleteTheNode;
// }
// void deletion(node* head, int value){
//     if(head==NULL){
//         return;
//     }
//     if(head->link==NULL){
//         deletionAthead(head);
//         return;
//     }
//     node* pointer = head;

//     while(pointer->link->data!=value){
//         pointer = pointer->link;

//     }
//     node* deleteTheNode = pointer->link;
//     pointer->link= pointer->link->link;

//     delete deleteTheNode;

// }

// node* reverse(node* &head){
//     node* prevPtr = NULL;
//     node* currentPtr = head;
//     node* nextPtr;

//     while(currentPtr!=NULL){
//         nextPtr = currentPtr->link; 
//         currentPtr->link = prevPtr;

//         prevPtr = currentPtr;
//         currentPtr = nextPtr;
//     }
//     return prevPtr;
// }
// node* reverseRecursion(node* &head){
    
//     if(head==NULL || head->link==NULL){
//         return head;
//     }
//     node* newHead = reverseRecursion(head->link);
//     head->link->link = head;
//     head->link = NULL;

//     return newHead;
// }
// node* reverseK(node* &head, int k){
//     node* prevPtr = NULL;
//     node* currentPtr = head;
//     node* nextPtr;

//     int count = 0;
//     while(currentPtr!=NULL && count<k){
//         nextPtr=currentPtr->link;
//         currentPtr->link = prevPtr;

//         prevPtr = currentPtr;
//         currentPtr = nextPtr;
//         count++;
//     }
//     if(nextPtr!=NULL){
//             head->link =  reverseK(nextPtr, k);
//     }
    
//     return prevPtr;

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
//     inserAtTail(head, 3);
//     inserAtTail(head, 5);
//     inserAtTail(head, 10);
//     inserAtTail(head, 12);
//     inserAtTail(head, 15);

//     // inserAtTail(head, 7);
//     // inserAtTail(head, 9);
//     // display(head);
//     // cout<<"Element added at the top"<<endl;
//     // insertAthead(head, 10);
//     // display(head); 
//     //cout<<searching(head, 9)<<endl;
//     //deletion(head, 5);
//     //display(head);
//     // cout<<"Element deleted at the top"<<endl;
//     // deletionAthead(head);
//     // display(head);
//     // node* newHead = reverse(head);
//     // cout<<"Element reversed"<<endl;
//     // display(newHead);

//     // node* anotherHead = reverseRecursion(head);
//     // cout<<"Element reversed"<<endl;
//     // display(anotherHead);

//     int k =2;
//     node* anotherHead = reverseK(head,k);
//     cout<<"Element reversed"<<endl;
//     display(anotherHead); 
    
//     return 0;
// }




#include <iostream>

// Step 1: Define the Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Step 2: Define the LinkedList class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Display function to print the linked list elements
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Step 3: Creating linked list nodes
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    // Step 4: Linking the nodes together to form a linked list
    LinkedList linkedList;
    linkedList.head = node1;
    node1->next = node2;
    node2->next = node3;

    // Step 5: Display the linked list
    linkedList.display();

    // Step 6: Deallocate memory (optional)
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
