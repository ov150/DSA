#include<iostream>
using namespace std;
#define n 100

class stack{
    int * arr;
    int top;

public:
    stack(){
        arr = new int[n];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<" Stack is already full "<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<" Stack is empty "<<endl;
            return;
        }
        top--;
    }

    int display(){
        if(top == -1){
            cout<<" NO ELEMENT TO HERE..."<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top ==-1;
    }
};
int main(){
    stack st;
    st.push(2);
    st.push(5);
    st.push(8);
    st.push(9);
    cout<<"Element removed :";
    cout<<st.display()<<endl;
    st.isEmpty();
    
    st.pop();
    
    cout << "Elements in the stack after push: ";
    while (!st.isEmpty()) {
        std::cout << st.display() << " ";
        st.pop();
    }
}