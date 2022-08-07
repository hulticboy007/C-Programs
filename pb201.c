#include<stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)//rows
    {
        for (int j = 1; j <= 5-i; j++)//spaces
        {
            printf(" ");
            for (int x = 1; x <= (2*i-1); x++)
            {
                printf("*");    
            }
         
        }printf("\n"); 

        
    }  
    
}