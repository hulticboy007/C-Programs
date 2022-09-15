// pointer function

#include<stdio.h>
int sum(int,int);
int main(){
    int s=0;
    int (*ptr)(int,int)=&sum;
    s=(*ptr)(3,3);
    printf("%d",s);
}
int sum(int a,int b){
    return a+b;
}
