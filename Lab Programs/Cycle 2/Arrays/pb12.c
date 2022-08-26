/** Program to print the sum and average of elements in an array
 * 
 * ALGORITHM
 * 
 * START
 * 
 * 
 * 
 * STOP
* */
#include<stdio.h>
int main(){
    int arr[6],sum=0,avg;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 6; j++)
    {
        sum=sum+arr[j];
    }
    avg=sum/6;
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",avg);
}