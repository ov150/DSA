#include<stdio.h>

void printArray(int* arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int* arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//why we are using int* arr?
//because we are passing the address of the array
//is we don't use int* arr?
//then we are passing the value of the array
//how bubbleSort works?
//we are comparing the adjacent elements
//explain in diagram
//we are comparing the first two elements
//next step is comparing the second two elements
//after that we are comparing the third two elements
//why two for loops?
//because we are comparing two adjacent elements
//how this condition works?
//if the first element is greater than the second element
//why we are using temp variable?
//because we are swapping the elements



int main() {



    int arr[] = {23, 67, 2 , 10, 0};
    int n =5;
    printf("Before sorting: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("\nAfter sorting: ");
    printArray(arr, n);


    return 0;

}