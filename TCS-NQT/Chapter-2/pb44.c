// program to find the largest of two numbers using functions

#include<stdio.h>
int max(int,int);
int main(){
    int x,y;
    printf("Enter the two numbers");
    max(x,y);
}
int max(int x,int y){
    if(x>y){
        printf("%d",x);
    }else{
        printf("%d",y;)
    }
}