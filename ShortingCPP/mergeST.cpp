#include<iostream>
using namespace std;

void merge(int arr[],int l,int r, int mid){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }

    int ptr1 = 0;
    int ptr2 = 0;
    int k = l;

    while(ptr1<n1 && ptr2<n2){
        if(a[ptr1]<b[ptr2]){
            arr[k] = a[ptr1];
            ptr1++;
            k++;
        }
        else{
            arr[k] = b[ptr2];
            ptr2++;
            k++;
        }
    }
    while(ptr1<n1){
        arr[k] = a[ptr1];
        ptr1++;
        k++;
    }
    while(ptr2<n2){
        arr[k] = b[ptr2];
        ptr2++;
        k++;
    }


}
void mergeShort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeShort(arr,l,mid);
        mergeShort(arr,mid+1,r);

        merge(arr,l,r,mid);

    }
}

int main(){

    int arr[] = {7,2,9,3,4,5,6,0,8,1};
    mergeShort(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;


    return 0;
}
