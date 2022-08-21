// Program to print the transpose of a matrix


#include<stdio.h>
int main(){
    int a[2][3],i,j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("input a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
        
    }
    printf("Original Matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Transposed Matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
}