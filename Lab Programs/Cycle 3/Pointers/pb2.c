// program using pointers to access the elements of an array and count the no. of occurances of the given number in the array.

#include<stdio.h>

int main(void){
    int n,find,count=0;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    printf("Enter element to find occurance: ");
    scanf("%d",&find);
    for (int j = 0; j < n; j++)
    {
        if (*(p+j)==find)
        {
            count++;
        }
        
    }
    printf("No. of occurance: %d",count);   
}
