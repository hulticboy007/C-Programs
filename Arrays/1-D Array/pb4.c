/** Program to print sum and average for an array of inputed numbers
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
    int b;
    printf("Enter the datas in array: ");
    scanf("%d",&b);
    int sum=0;
    int avg;
    int a[b];
    printf("Enter %d numbers: ",b);
    for (int i = 0; i <=b-1; i++) 
    {
        /* code */
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i <=b-1; i++) 
    {
        /* code */
        sum = sum+ a[i];
    }
    printf("Sum is %d\n",sum);
    avg=sum/b;
    printf("Average is %d\n",avg);
    
}