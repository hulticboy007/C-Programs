// To write a C program to calculate the mean, variance and standard deviation using functions.

#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,mean=0,var=0,sd=0,df=0;
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
    mean=sum/n;
    for (int k = 0; k < n; k++)
    {
        df=df+((mean-arr[k])*(mean-arr[k]));
    }
    var=(df*df)/n;
    sd=sqrt(var);
    printf("Mean is %d\n",mean);
    printf("Variance is %d\n",var);
    printf("Standard deviation is %d\n",sd);
    
    
    
}