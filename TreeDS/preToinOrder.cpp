#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }

};

int search(int inorder[], int start, int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* builtTree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    // if(start==NULL){
    //     return node;
    // }
    int pos = search(inorder, start, end, curr);
    node->left = builtTree(preorder, inorder, start, pos-1);
    node->right = builtTree(preorder, inorder, pos+1, end);


    return node;



}

void inorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);

}

int main(){
    int preorder[] = {1, 2, 4, 3 ,5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node* root = builtTree(preorder, inorder, 0, 4);
    inorderPrint(root);

    return 0;
}




// #include<iostream>
// using namespace std;

// class base{
//     public:
//     base(){
//         cout<<"\n I am base class constructor";
//     }
//     base(int a){
//         cout<<"\n Parametrized"<<a;
//     }
// };

// class derived:public base{
//     public:

//     derived(int a){
//         cout<<"\nconstructor derived";
//     }
   
// };

// int main(){               
//   derived d(10);
//     return 0;           
// }