/** Program to display a matrix
*
* */
#include<stdio.h>
int main(){
    int a[3][3],i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d] no: ",i,j);
            scanf("%d\n",&a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    
    }
    
