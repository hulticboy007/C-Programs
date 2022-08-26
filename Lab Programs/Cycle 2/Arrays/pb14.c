/** Program to perform matrix addition and multiplication
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
int a[3][3],b[3][3],i,j,add[3][3],mul[3][3];
printf("Enter the first matrix: ");
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the second matrix: ");
for (i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        scanf("%d",&b[i][j]);
    }
}
//addition
for (i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        add[i][j]=a[i][j]+b[i][j];
    }    
}
for (i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        mul[i][j]=a[i][j]*b[i][j];
    }   
}
//output
for (int i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%d\t",add[i][j]);

    }
    printf("\n");
}
printf("\n");
printf("Multiplication\n");
for (int i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%d\t",mul[i][j]);

    }
    printf("\n");
}

}