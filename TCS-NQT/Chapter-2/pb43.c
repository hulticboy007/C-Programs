// program to show call by reference

#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,*aa,*bb,swap();
    
    a=5;
    b=10;
    aa=&a;
    bb=&b;
    printf("Value of a=%d & value of b=%d before swap\n",a,b);
    printf("Value of aa=%d & value of bb=%d \n",aa,bb);
    
    swap(aa,bb);
    printf("\nvalue of a=%d & b=%d after swap",a,b);
    getch();
}
int swap(int *x,int *y)
 {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

 }
