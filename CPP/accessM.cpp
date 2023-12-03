// #include<iostream>
// using namespace std;


// #include <iostream>
// using namespace std;

// class Employee {
//   private:
//     // Private attribute
//     int salary;

//   public:
//     // Setter
//     void setSalary(int s) {
//       salary = s;
//     }
//     // Getter
//     int getSalary() {
//       return salary;
//     }
// };

// int main() {
//   Employee myObj;
//   myObj.setSalary(50000);
//   cout << myObj.getSalary();
//   return 0;
// }


// inharitance

// single

// class first{
//   public:
//     void baseFunc(){
//       cout<<"base function"<<endl;
//     }

// };

// class second : public first{
//   public:
//     void drivedFunc(){
//       cout<<"drived function"<<endl;
//     }

// };

// int main(){
//   second obj2;
//   obj2.baseFunc();
//   obj2.drivedFunc();
//   return 0;
// }

//multiple

// class first{
//   public:
//       void baseFirst(){
//         cout<<"class first"<<endl;
//       }

// };
// class second{
//   public:
//       void drivedSecond(){
//         cout<<"class second"<<endl;
//       }
  
// };
// class third : public first,public second{
//   public:
//       void classThirt(){
//         cout<<"class third"<<endl;
//       }

// };

// int main(){
//   third obj3;
//   obj3.classThirt();
//   obj3.baseFirst();
//   obj3.drivedSecond();



//   return 0;
// }

//multilevel

// class first{
//   public:
//       void baseFirst(){
//         cout<<"class first"<<endl;
//       }

// };
// class second : public first{
//   public:
//       void drivedSecond(){
//         cout<<"class second"<<endl;
//       }
  
// };
// class third :public second{
//   public:
//       void classThirt(){
//         cout<<"class third"<<endl;
//       }

// };

// int main(){
//   third obj3;
//   obj3.classThirt();
//   obj3.baseFirst();
//   obj3.drivedSecond();
//   return 0;
// }

//hierarchical

// class first{
//   public:
//       void baseFirst(){
//         cout<<"class first"<<endl;
//       }

// };
// class second : public first{
//   public:
//       void drivedSecond(){
//         cout<<"class second"<<endl;
//       }
  
// };
// class third :public first{
//   public:
//       void classThirt(){
//         cout<<"class third"<<endl;
//       }

// };

// int main(){
//   second obj2;
//   third obj3;
//   obj2.baseFirst();
//   obj2.drivedSecond();
//   obj3.baseFirst();
//   obj3.classThirt();
//   return 0;
// }

//hybrid

// class first{
//   public:
//       void baseFirst(){
//         cout<<"class first"<<endl;
//       }

// };
// class second : public first{
//   public:
//       void drivedSecond(){
//         cout<<"class second"<<endl;
//       }
  
// };
// class third :public first, second{
//   public:
//       void classThirt(){
//         cout<<"class third"<<endl;
//       }

// };

// int main(){
//   second obj2;
//   third obj3;
//   obj2.baseFirst();
//   obj2.drivedSecond();
//   // obj3.baseFirst();
//   obj3.classThirt();
//   return 0;
// }



// class myclass{
//   int x;
//   int y;
//   // int x = 10;
//   // int y = 15;
//   // int z;
//   public:
//       myclass( int a , int b){
//         x = a;
//         y = b;
//         cout<<a<< "  " <<b; 
//       }
  
// };
// int main(){

//   myclass obj();
//   // obj.a = 10;
//   // obj.b = 15;

//   return 0;
// }





// class MyClass {
// public:

//     int x;
//     // Constructor
//     MyClass( int a) {
//         cout << "Constructor called!" << endl;
//         cout<<a << endl;
//         displayMessage(50);
//     }

//     // Member function
//     void displayMessage( int b) {
//         cout << "Hello from member function!" << endl;
//         cout<<b << endl;;
//     }
// };

// int main() {
//     // Creating an object of the class
//     MyClass obj(5);
//     obj.x = 10;
//     cout<<obj.x<<endl;


//     // Calling the member function using the object
//     obj.displayMessage(15); // Output: "Hello from member function!"
//     return 0;
// }



// class base{
//   public:
//       base(int a){
//           cout<<a;
//       }

// };
// int main(){



//     base obj(5);

//   return 0;
// }

// class base{
//   private:
//   int a=10;

//   protected:
//   int b=20;

// public:
//   int c=70;

//   int get(){
//    return a;
//   }
// };

// int main()
// {
//   base d;
//  cout<<d.get()<<endl;
//  return 0;

// }
// #include <iostream>

// using namespace std;
// int main() {
//     typedef int babu;
//     babu x, y, z;
//     x = 10;
//     y  = 20;
//     z = x + y;
//     printf("The sum of %d and %d is %d", x, y, z);
//     return 0;
// } 


// typedef   int        myint;
//  |         |           |
//  |         |           |
// keyword   datatype   newname

// struct emp{
//     int a;
//     int b;

// };

// int main(){
//     struct emp e1;
//     e1.a = 10;
//     e1.b = 20;
//     cout<<e1.a<<endl;
//     cout<<e1.b<<endl;
// }


// typedef struct emp{
//     int a;
//     int b;

// }nyaNaam;

// int main(){
//     nyaNaam e1;
//     e1.a = 10;
//     e1.b = 20;
//     cout<<e1.a<<endl;
//     cout<<e1.b<<endl;
// }






// class Base{

// };

// class Derived : public Base{

// };

// int main(){

// }













































// class Employee{
//     private:
//         int a,b,c;
//     public:
//         int d,e;
//         void setData(int aPara,int bPara,int cPara);
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int aPara,int bPara,int cPara){
//     a = aPara;
//     b = bPara;
//     c = cPara;
// }

// int main(){
//     Employee me;
//     me.d = 10;
//     me.e = 20;
//     me.setData(2,4,6);
//     me.getData();
// }


