// program to perform sequential and binary search using functions

#include<stdio.h>
int sequential(int arr[],find){
    
}
int main(){
    int n,i,find,bin,seq;
    printf("Array length: \n");
    scanf("%d",&n);
    printf("Enter array: ");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&find);
    seq=sequential(arr,find);
    printf("sequential: %dth index",seq);
    bin=binary(arr,find);
    printf("binary: %dth",bin);


}