// binary search using sorted array

#include<stdio.h>

int main(){
    int n,f;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&f);
    int low=0,high=n-1,mid=(low+high)/2;
    while (low<=high)
    {
        if(arr[mid]<f){
            low=mid+1;
        }else if(arr[mid]==f){
            printf("Element found at position %d\n",mid+1);
            break;
        }else if(arr[mid]>f){
            high=mid+1;
        }
        mid=(high+low)/2;
    }
   
    
    return 0;
}