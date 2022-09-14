// program to count the number of same elements in the array using pointers

#include<stdio.h>
int main(){
    int n,count=0,k;
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for (int j = 0; j < n; j++)
    {
        if (*(p+j)==arr[j])  
        {
            /* code */
            count++;
        }
        
    }
    printf("occurance : %d",count);
    return 0;
}