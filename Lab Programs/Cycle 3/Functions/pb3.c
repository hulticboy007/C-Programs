

#include<stdio.h>
int sequential(int arr[],int find,int length){
    int position,flag=0,x=0;
    for (int i = 0; i < length; i++)

    {
        if (find==arr[i])
        {
            /* code */
            flag=1;
            position=i;
            break;
        }
    
}
if(flag==1){
    return position;
}else{
    return 0;

}
}

void binary(int arr[],int find,int length){
    printf("\nBINARY SEARCH: \n");
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
            printf("%d found at index %d\n",find,mid);
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
    seq=sequential(arr,find,n);
    printf("\nSEQUENTIAL SEARCH: \n");
    printf("Value found at %dth index\n",seq);


}