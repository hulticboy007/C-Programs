/** Program to find the prime numbers in a range
 * 
 * ALGORITHM
 * 
 * START
 * input n1,n2
 * 
 * 
 * STOP
* */
#include<stdio.h>
int main(){
    int a,b,flag;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    for (int i =a; i <=b; i++)
    {
        flag=0;
        for (int j = 1; j <=i;j++)
        {
            /* code */
            if (i%j==0)
            {
                /* code */
                flag++;
            }
            
        }
        if (flag==2)
        {
            /* code */
            printf("%d\n",i);
        }
        
        
    }
    return 0;
}