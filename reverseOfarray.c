#include<stdio.h>

void reverse_Array(int arr[], int n){

int start=0, end=n-1, temp;

    while(start<end){
        //swap method
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start ++;
        end--;
    }    
}
void printArray(int arr[], int n){

for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}

printf("\n");
}

int main(){
    int arr[]={43,54,36,12,98,76,90};
    int n=sizeof(arr)/sizeof(arr[0]); //initialize size of array

    printf("Original Array:\n");
    printArray(arr,n);

    reverse_Array(arr,n);
    
    printf("Reverse Array:\n");
    printArray(arr,n);
}
