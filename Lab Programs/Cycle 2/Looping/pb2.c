/** Program to print pascals triangle
 * 
 * ALGORITHM
 * 
 * START
 * initialize variables
 * Print "Enter the numbers"
 * pri
 * STOP
* */
#include<stdio.h>
int main(){
    int rows,coef,space,i,j;
    printf("Enter the number of rows ");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        for ( space = 0; space <= rows-i; space++)
        {
            /* code */
            printf(" ");
        }
        coef=1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ",coef);
            coef=coef*(i-j)/(j+1); 
        }        
        printf("\n");
        }
    
    return 0;
}