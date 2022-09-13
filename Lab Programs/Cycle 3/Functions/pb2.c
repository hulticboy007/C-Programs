// program to perform sequential and binary search using functions

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
    int low=0,high=length-1,mid=(high+low)/2;
    while (low<high)
    {   
        if (arr[mid]<=find)
        {
            low=mid+1;
        }else if (arr[mid]==find)
        {
            printf("%d found at location %d\n",find,mid+1);
            break;
        }else if (arr[mid]>find)
        {
            /* code */
            high=mid+1;
        }
        mid=(high+low)/2;
    }
    if (low>high)
    {
        /* code */
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
    seq=sequential(arr,find,n);
    printf("sequential: %dth index",seq);
    binary(arr,find,n);
    


}