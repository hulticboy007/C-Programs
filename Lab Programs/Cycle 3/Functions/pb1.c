// To write a C program to calculate the mean, variance and standard deviation using functions.

#include<stdio.h>
#include<math.h>

int mean(int[],int);
int var(int[],int,int);
int main()
{
    int n,means,variance;
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
    printf("mean = %d\n",means);
    variance=var(arr,means,n);
    printf("variance = %d",variance);
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
int var(int arr[],int u,int w){
    int my=0,vari;
    for (int j = 0; j < w; j++)
    {
        my=my+((u-arr[j])*(u-arr[j]));
    }
    vari=my/w;
    return vari;
    }


    