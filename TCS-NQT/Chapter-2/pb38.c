// Program to find square of a number using functions.

#include<stdio.h>
#include<string.h>
void square(int x){
    int y;
    y=x*x;
    printf("The squared value is %d",y);
}
int main(){
    int x;
    printf("Enter the value to be squared: ");
    scanf("%d",&x);
    square(x);
}