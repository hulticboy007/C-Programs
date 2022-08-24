/** Program to find the sum of all digits of a given no.
 * 
 * ALGORITHM
 * 
 * START
 * read the num
 * m=num%10
 * r=r+m
 * repeat until m=0
 * STOP
* */
#include<stdio.h>
int main(){
    int num,r=0,m;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0)
    {
        /* code */
        m=num%10;
        r=r+m;
        num=num/10;
    }
    printf("The sum is %d",r);
    return 0;

}