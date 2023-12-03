#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream writtenFile;
    writtenFile.open("example.txt");
    if (writtenFile.is_open()) {
        writtenFile << "Hello, File Handling in C++!" <<endl;
        writtenFile.close();
    }
    ifstream readFile;
    readFile.open("example.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout<<line<<endl;
        }
        readFile.close();
    }
    
    return 0;
}
