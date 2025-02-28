#include<stdio.h>
int main(){
    int arr[]={32,65,78,94,41,63,12,38,101,258,3695};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The largest element in the array is: %d", max);
    return 0;
}
