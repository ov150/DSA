// #include <iostream>
// #include <string.h>
// using namespace std;
// void deleteInarry(string, string);
// int main() {
//   string cars[5];
//   string newElement;
//   int i;
//   cout<<"Enter the Strings : ";
//   for(i =0; i<5; i++){
//     cin>>cars[i];
//   }
//   cout<<"Enter a valid String to insert : ";
//   cin>>newElement;

//   deleteInarry(cars, newElement);
//   for(int i=0;i<4;i++){
//     cout<<cars[i]<<" ";
//   }


//   return 0;
// }

// void deleteInarry(string cars[], string newElement){
//     int i, k;
//     for(i=0;i<5;i++){
//         if(cars[i]==newElement){
//             for(int j =i; j<4;j++){
//                 cars[j] = cars[j+1];  
//             }
//         }
//     }
// }


#include <iostream>
#include <string>
using namespace std;

void deleteInArray(string[], string);
int main() {
  string cars[5];
  string newElement;
  int i;
  cout << "Enter the Strings : ";
  for (i = 0; i < 5; i++) {
    cin >> cars[i];
  }
  cout << "Enter a valid String to delete : ";
  cin >> newElement;

  deleteInArray(cars, newElement);
  for (int i = 0; i < 4; i++) {
    cout << cars[i] << " ";
  }

  return 0;
}

void deleteInArray(string cars[], string newElement) {
    int i, k;
    for (i = 0; i < 5; i++) {
        if (cars[i] == newElement) {
            for (int j = i; j < 4; j++) {
                cars[j] = cars[j + 1];
            }
            cars[4] = "";
        }
    }
}
