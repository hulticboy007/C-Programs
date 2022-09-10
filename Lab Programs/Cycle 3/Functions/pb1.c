// To write a C program to calculate the mean, variance and standard deviation using functions.

#include<stdio.h>
#include<math.h>

int mean(int[],int);
int main()
{
    int n,means;
    float sd;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    means=mean(arr,n);
    printf("mean = %d",means);
}


int mean(int arr[],int y){
    int mx=0,meanss;    
    for (int i = 0; i < y; i++)
    {
        mx=mx+arr[i];
    }
    meanss=mx/y;
    return meanss;
    }



    