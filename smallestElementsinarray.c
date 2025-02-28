#include<stdio.h>

int main(){
int arr[]={25,54,89,65,75,34,91};  //initialize array
int n= sizeof(arr)/sizeof(arr[0]);   //initialize size
int min=arr[0];
for(int i=0; i<n; i++){
    if(min>arr[i]){     
       min=arr[i];
    }
}
printf("The smallest element in the array is: %d",min);
return 0;
}