//program to swap two numbers using functions

#include<stdio.h>
void swap(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("a: %d b: %d",a,b);
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    swap(a,b);

}