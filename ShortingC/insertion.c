#include<stdio.h>

void printArray(int* arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int insertionShort(int *arr, int n){
    int key, j;
    for(int i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}
int main(){
    int n =5;
    int arr[] = {32, 23, 4, 54,2};

    printf("Before sorting: ");
    printArray(arr, n);

    printf("\nAfter sorting: ");
    insertionShort(arr, n);
    printArray(arr, n);

    return 0;
}