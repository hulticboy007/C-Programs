// program to find the largest of two numbers using functions

#include<stdio.h>
void max(int,int);
int main(){
    int x,y;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    max(x,y);
}
void max(int x,int y){
    int max;
    if(x>y){
        max=x;
    }else{
        max=y;
    }
    printf("max=%d",max);
}