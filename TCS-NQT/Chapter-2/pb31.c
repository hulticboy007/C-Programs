/** Program to display a matrix
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
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d] no: ",i,j);
            scanf("%d\n",a[i][j]);
        }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    }
    
}