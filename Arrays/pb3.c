/** Program to print sum and average for an array of 5
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
    
    int a[5];
    int sum=0;
    int avg;
    printf("Enter 5 numbers: ");
    for (int i = 0; i <=4; i++) 
    {
        /* code */
        scanf("%d",&a[i]);
    }
    printf("Enter 5 numbers: ");
    for (int i = 0; i <=4; i++) 
    {
        /* code */
        sum = sum+ a[i];
    }
    printf("Sum is %d\n",sum);
    avg=sum/5;
    printf("Average is %d\n",avg);
    
}