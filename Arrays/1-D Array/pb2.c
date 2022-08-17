/** Program to print numbers of an array in reverse order
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
    printf("Enter 5 numbers: ");
    for (int i = 1; i <=5; i++) 
    {
        /* code */
        scanf("%d",&a[i]);
    }
     for (int j = 5; j >= 1; j--)
    {
        /* code */
        printf("%d\n",a[j]);
    }
    
}