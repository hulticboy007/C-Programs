#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)//rows
    {
        for (int j = 1; j <=(n-i); j++)//spaces
        {
                printf(" ");        
        }
        for (int x=1; x<=(2*i-1);x++)
        {
                printf("*");    
        }
    printf("\n");
    }
}