// program to print fibanocii series using recursion

#include<stdio.h>
void fiba(int z){
    static int n1=0,n2=1,n3;
    if(z>0){
        
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf(" %d ",n3);
        fiba(z-1);
    }
    
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf(" 1 ");
    fiba(n-1);
    return 0;
}