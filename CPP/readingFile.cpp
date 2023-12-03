#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("example.txt"); // Opens a file named "example.txt" for writing

    if (outputFile.is_open()) {
        // File is successfully opened, perform read/write operations here
        outputFile << "Hello, File Handling in C++!";
        outputFile.close(); // Close the file when done
    }
    else {
        cout << "Failed to open the file." <<endl;
    }

    return 0;
}
