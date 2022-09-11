

#include<stdio.h>
void binary(int arr[],int find,int length){
    
    //if elements are not sorted
    for (int j = 0; j < length; j++)
    {
        if (arr[j]>arr[j+1])
        {
            /* code */
            printf("Not sorted properly\n");
            
        }
        
    }
    
    
    int low=0,high=length-1,mid=(low+high)/2;
    while (low<=high)
    {
        /* code */
        if (arr[mid]<find)
        {
            /* code */
            low=mid+1;
        }else if (arr[mid]==find)
        {
            /* code */
            printf("%d found at location %d\n",find,mid+1);
            break;
        }else if (arr[mid]>find)
        {
            /* code */
            high=mid+1;
        }
        mid=(low+high)/2;
    }
    if (low>high)
    {
        printf("Element not found\n");
    }       
    }
    
int main(){
    int n,i,find,bin,seq;
    printf("Array length: \n");
    scanf("%d",&n);
    printf("Enter array: \n");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&find);
    
    binary(arr,find,n);
    


}