//program to use call by value , function which use actual numbers in actual parameter when calling.

#include<stdio.h>
void fun(int,int);

void main(){
    int x=5,y=7;
    fun(x,y);
    printf("x: %d, y: %d ",x,y);
}
void fun(int x,int y){
    x=7;
    y=5;
    printf("x: %d, y: %d ",x,y);
}