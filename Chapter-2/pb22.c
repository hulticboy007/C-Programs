#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the value: ");
    scanf("%d",&n);
    for (int i = n; i >=1 ; i--)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is : %d",n,fact);
    return 0;
}