// To write a C program to calculate the mean, variance and standard deviation using functions.

#include<stdio.h>
#include<math.h>

int mean(int,int);
int main()
{
    int n,sum=0,mean=0,var=0,df=0,m;
    float sd;
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
    m=mean(sum,n);
}

int mean(int x,int y){
    int mx;    
    mx=x/y;
    return mx;
    }



    for (int k = 0; k < n; k++)
    {
        df=df+((mean-arr[k])*(mean-arr[k]));
    }
    var=(df)/n;
    sd=sqrt(var);
    
    printf("Variance is %d\n",var);
    printf("Standard deviation is %f\n",sd);
