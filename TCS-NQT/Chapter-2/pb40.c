//pb.40 program to find factiorial of a number using functions

#include<stdio.h>
void fact(int n){
    int fac=1;
    for (int i = n; i >= 1; i--)
    {
        /* code */
        fac=fac*i;
    }
    printf("The factorial is %d",fac);
    
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact(n);
}