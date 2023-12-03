#include<iostream>
using namespace std;  


class base{
    public:
        virtual void display() = 0;
};
class drived: public base{
    public:
        void display(){
            cout<<"drived function"<<endl;
        }
};
class another: public base{
    public:
        void display(){
            cout<<"another function"<<endl;
        }
};
int main(){
    base *ptr;
    // base obj;
    drived obj1;
    another obj2;
    // obj.display();
    obj1.display();
    obj2.display();
    // ptr = &obj;
    ptr->display();
    ptr = &obj1;
    ptr->display();
    ptr = &obj2;
    ptr->display();
    return 0;
}










// class base{
//     public:
//         virtual void display(){
//             cout<<"base function"<<endl;
//         }

// };
// class drived: public base{
//     public:
//         void display(){
//             cout<<"drived function"<<endl;
//         }

// };
// class another: public base{
//     public:
//         void display(){
//             cout<<"another function"<<endl;
//         }

// };
// int main(){
    // base *ptr;
    // base obj;
    // drived obj1;
    // another obj2;
    // obj.display();
    // obj1.display();
    // obj2.display();
    // ptr = &obj;
    // ptr->display();
    // ptr = &obj1;
    // ptr->display();
    // ptr = &obj2;
    // ptr->display();
//     return 0;
// }
