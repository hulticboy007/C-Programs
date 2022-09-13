//HARSHED ABDULLA CS A 43
// program to print factorial using recursion

#include<stdio.h>
int fact(int a){
    if (a==0)
    {
        return 1;
    }else{
        return (a*fact(a-1));
    }
}   
    
int main(){
    int n,k;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=fact(n);
    printf("%d",k);

}