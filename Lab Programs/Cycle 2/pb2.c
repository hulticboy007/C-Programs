/** Program to print pascals triangle
 * 
 * ALGORITHM
 * 
 * START
 * 
 * 
 * 
 * STOP
* */
#include<stdio.h>
int main(){
    int rows,coef=1,space,i,j;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        for ( space = 1; space <= rows-i; space++)
        {
            /* code */
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            /* code */
            if (j==0||i==0)
            {
                /* code */
                coef=1;
            }else{
                coef=coef*(i-j+1)/j;
                printf("%4d",coef);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}