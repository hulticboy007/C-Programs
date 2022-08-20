// Program to multiply two matrices


#include<stdio.h>
int main(){
        int a[3][3],i,j,b[3][3],s[3][3];
    printf("Enter the first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
        
    }
    printf("Enter the second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]);
            printf("\n");
        }
    
    }

    printf("first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
            
            
        }
        printf("\n");
    }

    printf("second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",b[i][j]);
            
            
        }
        printf("\n");
    }


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s[i][j]=a[i][j]*b[i][j];
            
            
        }
        
    }
    printf("sum matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",s[i][j]);
            
            
        }
        printf("\n");
    }
}