#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *root, int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value<root->data){
        root->left = insertBST(root->left, value);
    }
    else{
        root->right = insertBST(root->right, value);
    }

    return root;
}

void inorder(Node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<endl;
    cout<<root->data<<" ";
    cout<<endl;
    inorder(root->right);
}

int main(){

    Node *root = NULL;
    root = insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 7);
    insertBST(root, 1);
    // insertBST(root, 9);
    // insertBST(root, 2);

    inorder(root);
    cout<<endl;


    return 0;
}