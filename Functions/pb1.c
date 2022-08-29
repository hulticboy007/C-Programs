//program to use sum function

#include<stdio.h>
void sum(){  //function definition
    int a,b,sum=0;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("The sum is %d ",sum);
}
void main(){
    sum(); //function call
}