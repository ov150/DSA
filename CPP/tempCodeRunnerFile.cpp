#include<iostream>
using namespace std;
//default and parameterized constructor in base class

class base{
    public:
        base(){
            cout<<"base constructor"<<endl;
        }
        base(int a){
            cout<<"parameterized constructor in base class"<<endl;
            cout<<a<<endl;
        }

};
class drived: public base{
    public:
        drived(){
            cout<<"derived constructor"<<endl;
        }

};
int main(){
    drived obj();
    // drived obj(10);
    base obj1(10);

    return 0;
}