/** Program to input a 2d array and output it
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
        printf("The %d %d value of the array arr[%d][%d] is %d :\n",i,j,i,j,arr[i][j]);
    }
    
}



}