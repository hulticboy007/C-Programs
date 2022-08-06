/** Program to print sequence star 2
 * consider n=5
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
 for (int n = 1; n <= 5; n++)
 {
    
    for (int j = n; j >= n; j--)
    {
        printf(" ");
        for (int k = 1; k <= j; k++)
        {
            printf("*");
        }
        
    }
    printf("\n");
    
 }
 

}