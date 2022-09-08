//program to print multiplication table for a number using functions

#include<stdio.h>
int table(int);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    table(n);
}
int table(int n){
    int i,r;
    for (i = 1; i <= 10; i++)
    {
        r=n*i;
        printf("%d * %d = %d\n",n,i,r);
    }
    
}