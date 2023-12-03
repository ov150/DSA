#include<iostream>
using std::string;
using namespace std;



// class Fruit{
// public:
//     string Name; //this is the property of Fruit class
//     string Color;  //this is the property of Fruit class

// };

// int main(){
//     Fruit apple; //this is object of fruit classs...
//     apple.Color = "red"; //this line of code assinning the value of color property in the object apple
//     apple.Name = "Apple";

//     cout<<apple.Name <<" - " <<apple.Color<<endl;  //print the apple object

//     Fruit *mango = new Fruit; //another way to create object using pointer
//     mango->Color = "yellow";;
//     mango->Name = "Mango";

//     cout<<mango->Name <<" - "<<mango->Color;


//     return 0;
// }


// constractor

// constractor are used to initialize an object 
// this is a function which is called when an object is called
//same name as class name

// Types
    // 1. Default
    // 2. Parameterised
    // 3. copy



// class Rectangle{
// public:
//     int l; 
//     int b;

//     Rectangle(){ //default contructor - no argument passed
//         l = 0;
//         b = 0;
//     }
//     Rectangle(int x, int y){ //parameterised constructor  - args passed
//     //this constructor passed the value in public class variable
//         l = x;
//         b = y;
//     }
//     Rectangle( Rectangle& r){ //copy constructor - initialise an obj by another existing object
//         l = r.l;
//         b = r.b;

//     }



// };

// int main(){
//     Rectangle r1;
//     cout<<r1.l <<" "<<r1.b<<endl;

//     Rectangle r2(3,4);
//     cout<<r2.l <<" "<<r2.b<<endl;

//     Rectangle r3 = r2;
//     cout<<r3.l <<" "<<r3.b;

// }



//capsule

// class ABC{
//     int x;
    
// public:
//     void set(int n){
//         x = n;
//     }
//     int get(){
//         return x;
//     }
// };

// int main(){
//     ABC obj1;
//     obj1.set(3);
//     cout<<obj1.get()<<endl;
// }




//public
    //data and functions -> they can be accessed from the code anywhere
//protected
    //accessible in own
    //parent class
    // drived(child)

    

// class Parent{
//     public:
//         int x;

//     protected:
//         int y;

//     public:
//         int z;

// };

// class Child1: public Parent{
//     //x will remain public
//     //y will remain protected
//     //z will not be accessible
// };
// class Child2: private Parent{
//     //x will remain private
//     //y will remain private
//     //z will not be inaccessible
// };

// class Child3: protected Parent{
//     //x will remain protected
//     //y will remain protected
//     //z will not be inaccessible
// };

// int main(){
//     return 0;

// }
