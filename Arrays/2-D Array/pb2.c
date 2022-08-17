/** Program to input a 2d array and output it in the form of matrix and sum it
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
int arr[2][3];
int sum=0;
for (int i = 0; i < 2; i++)
{
    /* code */
    for (int j = 0; j < 3; j++)
    {
        /* code */
        printf("Enter the [%d][%d] field no: ",i,j);
        scanf("%d",&arr[i][j]);
        printf("\n");
    }
    
}

for (int i = 0; i < 2; i++)
{
    /* code */
    for (int j = 0; j < 3; j++)
    {
             /* code */
            printf("%d",arr[i][j]);
            sum=sum+arr[i][j];
        
    }
    printf("%d\n");
    
    
}
printf("Sum is %d",sum);



}