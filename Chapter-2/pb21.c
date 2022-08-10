#include<stdio.h>
int main(){
int a=1,b=1,c=0,n;
printf("Enter the value till which you need to print the fibanocci series: ");
scanf("%d",&n);
printf("%d %d",a,b);
for (int j =1; j <= n; j++){
    c=c+j;
    a=b;
    b=c;
    printf("%d ",c);
}
return 0;
    
}