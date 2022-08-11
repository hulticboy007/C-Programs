/** Program to sum of series of 1+3+5+7+....
 * 
 * ALGORITHM
 * 
 * START
 * print enter the value till you which you need series
 * input n
 * print +i
 * s=s+i
 * i=i+2
 * if i<=n goto 8
 * print sum
 * STOP
*/
#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter the values: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i=i+2)
    {
        /* code */
        printf("%d+",i);
        s=s+i;
        
    }
        printf("\n");
        printf("Sum is %d\n",s);
        return 0;
}