// program to print factorial using recursion

#include<stdio.h>
int fact(int n){
    if (n==0)
    {
        return 1;
    }else{
        return (n*fact(n-1));
    }
    
}
int main(){
    int ch,n;
    printf("enter number: ");
    scanf("%d",&n);
    ch=fact(n);
    printf("Factorial: %d",ch);
    return 0;
    
    }