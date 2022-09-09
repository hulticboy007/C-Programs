// To write a C program to calculate the mean, variance and standard deviation using functions.

#include<stdio.h>


int main()
{
    int n,sum=0,mean=0,sd,div;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum=sum+arr[j];
    }
    printf("Sum is %d\n",sum);
    
    
}