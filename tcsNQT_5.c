/*
Given an integer array Arr of size N the task is to find the count of elements whose value 
is greater than all of its prior elements.

Note : 1st element of the array should be considered in the count of the result.

For example,
Arr[]={7,4,8,2,9}
As 7 is the first element, it will consider in the result.
8 and 9 are also the elements that are greater than all of its previous elements.
Since total of  3 elements is present in the array that meets the condition.
Hence the output = 3.

Example 1:
Input :
5 -> Value of N, represents size of Arr
7-> Value of Arr[0]
4 -> Value of Arr[1]
8-> Value of Arr[2]
2-> Value of Arr[3]
9-> Value of Arr[4]
Output :
3

Example 2:
input:
5   -> Value of N, represents size of Arr
3  -> Value of Arr[0]
4 -> Value of Arr[1]
5 -> Value of Arr[2]
8 -> Value of Arr[3]
9 -> Value of Arr[4]
Output : 
5

Constraints:
1<=N<=20
1<=Arr[i]<=10000
*/
#include<stdio.h>

int countGreaterElement(int arr[],int n){
    if(n==0) return 0;  
int count=1;   //first element is always counted
int max_so_far=arr[0];       //track max seen so far
for(int i=1;i<n;i++){
    if(arr[i]>max_so_far){
        count++;
        max_so_far=arr[i];  //update the maximum
    }
}
return count;
}
int main(){
    //Taking input 
    int n;
    printf("Enter the size of array(N):",n);
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=countGreaterElement(arr,n);
    printf("Output:%d",result);
    return 0;
}