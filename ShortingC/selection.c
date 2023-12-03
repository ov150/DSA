#include <stdio.h>

//print array function
void printArray(int* arr, int n){
    for (int i = 0; i < n; i++){  
        printf("%d ", arr[i]);
    }
}

void selectionSort(int* arr, int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

        //temp = arr[i];
        //arr[i] = arr[min];
        //arr[min] = temp;

        //explain the code line number 18 to 23
        //
    }
    
}

int main() {
    int n =5;
    int arr[] = {5,2 ,1,67,0};
    printf("Before sorting: ");
    printArray(arr, n);
    printf("\n");
    selectionSort(arr, n);
    printf("After sorting: ");
    printArray(arr, n);
    printf("\n");


    return 0;
}