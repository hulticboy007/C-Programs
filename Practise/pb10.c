// program to bubble sort
#include<stdio.h>
int main(){
    int temp,n;
    printf("Enter array size: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < n-1; k++)
    {
        for (int z = 0; z < n-k-1; z++)
        {
            if (arr[z]>arr[z+1])
            {
                temp=arr[z];
                arr[z]=arr[z+1];
                arr[z+1]=temp;
            }
            
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        printf(" %d ",arr[j]);
    }
    
    
}