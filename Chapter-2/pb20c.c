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
        for (int k=1; k<=(2*i-1);k++)
        {
                printf("*");    
        }
    printf("\n");
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= 2*i-2; k++)
        {
            printf("*");
        }
    printf("\n");
    }        

}