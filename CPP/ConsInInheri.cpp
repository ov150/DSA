#include<iostream>
using namespace std;

// constructor in base class
// class base{
//     public:
//         base(){
//             cout<<"base constructor"<<endl;
//         }

// };
// class drived : public base{

// };
// int main(){
//     drived obj;
//     return 0;
// }


// //constructor in derived class

// class base{
//     public:
//         base(){
//             cout<<"base constructor"<<endl;
//         }

// };
// class drived: public base{
//     public:
//         drived(){
//             cout<<"derived constructor"<<endl;
//         }

// };

// int main(){
//     drived obj;

//     return 0;
// }


// //default and parameterized constructor in derived class

// class base{
//     public:
//         base(){
//             cout<<"default constructor in base class"<<endl;
//         }
// };
// class drived: public base{
//     public:
//         drived(){
//             cout<<"derived constructor"<<endl;
//         }
//         drived(int x){
//             cout<<"parameterized constructor"<<endl;
//             cout<<x<<endl;
//         }
// };
// int main(){
//     drived obj(10);
// }


// //default and parameterized constructor in base class

class base{
    public:
        base(){
            cout<<"default constructor in base class"<<endl;
        }
        base(int x){
            cout<<"parameterized constructor in base class"<<endl;
            cout<<x<<endl;
        }

};
class drived: public base{
    public:
        drived(int x): base(x){
            cout<<"derived constructor"<<endl;
        }

};
int main(){
    drived obj(10);

    return 0;
}








