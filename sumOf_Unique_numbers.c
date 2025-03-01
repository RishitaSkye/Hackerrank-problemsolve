#include<stdio.h>
int findUniqueSum(int arr[], int n){
    int sum =0;
    for (int i =0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int arr[]={1,3,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int result= findUniqueSum(arr,n);
    printf("Sum of uniqsue numbers : %d\n",result);

    return 0;
}