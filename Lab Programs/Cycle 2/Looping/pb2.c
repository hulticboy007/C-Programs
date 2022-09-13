/**harshed abdulla
 * cs a 43 
 * Program to print pascals triangle
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
/* output
Enter the number of rows 5
      1 
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
  */