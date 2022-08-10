// prime or not

#include<stdio.h>
int main(){
    int n,r=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 2; i <= n-i; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            r=1;
            break;
        }
        
    }
    if (r==0)
    {
        /* code */
        printf("The number is prime");
    }else{
        printf("Non prime");
    }
    return 0;
    
}