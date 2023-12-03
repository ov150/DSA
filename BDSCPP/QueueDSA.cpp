#include<iostream>
using namespace std;
#define n 10

class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
            arr = new int[n];
            front = -1;
            back = -1;
    }

    void push(int x){
            if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] =x;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1|| front>back ){
            cout<<"No element in Queue "<<endl;
            return;
        }
        front++;
    }
    int display(){
        if(front==-1|| front>back ){
            cout<<"No element in Queue "<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1|| front>back ){
            return true;
        }
        return false;

    }
};


int main(){

    queue q;
    q.push(2);
    q.push(4);
    q.push(10);
    q.push(20);
    cout<<"Element removed :";
    cout<<q.display()<<endl;
    q.pop();
    cout << "Elements in the stack after push: ";
    while (!q.empty()) {
        std::cout << q.display() << " ";
        q.pop();
    }
    return 0;

}