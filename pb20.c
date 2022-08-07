/** Program to print sequence star3
 * 
 * ALGORITHM
 * 
 * START
 * n=5
 * 
 *
 * STOP
* */
#include<stdio.h>
int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    
 for (int i = 0; i < row; i++)
 {
    for (int s = 0; s < row-i; s++)
    {
        printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
        printf("* ");
    }
        printf("\n");
 }
 
}