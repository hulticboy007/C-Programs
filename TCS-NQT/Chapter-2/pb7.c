// program to reverse a number

#include<stdio.h>
int main(){
    int n,r=0,m;
    printf("Enter number: ");
    scanf("%d",&n);
    while (n>0)
    {
        m=n%10;
        r=r+m;
        n=n/10;
    }
    printf("Result: %d ",r);  
}