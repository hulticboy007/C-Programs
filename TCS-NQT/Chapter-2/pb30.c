/** Program to find the maximum of an array

* */
#include<stdio.h>
int main(){
int a[5],max,i;
printf("Enter the values of the array: ");
max=a[0];
for (i = 0; i < 5; i++)
{
    /* code */
    scanf("%d",&a[i]);
}
for (i = 1; i < 5; i++)
{
    /* code */
    if (max<a[i])
    {
        /* code */
        max=a[i];
    }
    
}
printf("The maximum no. is %d ",max);
}