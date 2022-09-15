// pointer function

#include<stdio.h>
void *(sum)(int a,int b){
    int sum=0;
    sum=a+b;
    printf("%d",sum);
}
int main(){
    int a=7,b=5;
    sum(a,b);
}