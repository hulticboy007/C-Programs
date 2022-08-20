// Program to find the sum of each row and column in a matrix


#include<stdio.h>
int main(){
    int a[3][3],i,j,sr,sc;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
        
    }
    for (i = 0; i < 3; i++)
    {
        sr=sc=0;
        for (j = 0; j < 3; j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("Value of sr[%d] is %d \n",i,sr);
        printf("Value of sc[%d] is %d \n",j,sc);
        printf("\n");

    
    }
    
}