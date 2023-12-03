#include <iostream>
#include <fstream>
using namespace std;

// int main(){
//     fstream fs;
//     fs.open("abc.txt", ios::out);
//     if(fs.is_open()){
//         fs<<"file handling";
//         fs.close();
//     }
//     fs.open("abc.txt", ios::in);
//     if(fs.is_open()){
//         string s;
//         while (getline(fs,s)){
//             cout<<s;
//         }
//     }
//     fs.close();
//     return 0;
// }




// #include <iostream>
// #include <fstream>
// #include<string>

int main(){
    std::fstream fs;
    fs.open("abc.txt", std::ios::out);
    if(fs.is_open()){
        fs<<"file handling";
        fs.close();
    }
    fs.open("abc.txt", std::ios::in);
    if(fs.is_open()){
        char s;
        while (fs){
            s = fs.get();
            std::cout<< s << "vivek";
        }
    }
    fs.close();
    return 0;
}



// #include <iostream>

// double divide(double a, double b) {
//     if (b == 0) {
//         throw "Error: Division by zero is not allowed!";
//     }
//     return a / b;
// }

// int main() {
//     double num1, num2;

//     std::cout << "Enter two numbers: ";
//     std::cin >> num1 >> num2;

//     try {
//         double result = divide(num1, num2);
//         std::cout << "Result of division: " << result << std::endl;
//     } catch (const char* errorMessage) {
//         std::cerr << errorMessage << std::endl;
//     }

//     return 0;
// }


// #include <iostream>

// int main() {
//     double num1, num2;

//     std::cout << "Enter two numbers: ";
//     std::cin >> num1 >> num2;

//     try {
//         if (num2 == 0) {
//             throw std::runtime_error("Error: Division by zero is not allowed!");
//         }
//         double result = num1 / num2;
//         std::cout << "Result of division: " << result << std::endl;
//     } catch (const std::runtime_error& e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }
