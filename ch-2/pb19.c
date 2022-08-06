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
 for (int i = 1; i <= 5; i++)
 {
    for (int j = 1; j <= 5; j++)
    {
        if (i+j<=5)
        {
            /* code */
            printf(" ");
        }else{
            printf("*");
        }
          
    }
 printf("\n");
 }

}