//program to find average 

#include<stdio.h>
int avg(int[],int);

int main()
    {
    int n,i,average=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&marks[i]);
    }
    average=avg(marks,n);
    printf("average=%d",average);
    }
int avg(int marks[],int n)
    {
    int sum=0,average;
    for (int i = 0; i < n; i++)
    {
        sum=sum+marks[i];
    }
    average=sum/n;
    return average;
    }
