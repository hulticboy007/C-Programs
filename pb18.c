/** Program to print sequence star1
 * 
 * ALGORITHM
 * 
 * START
 * print "enter the number of rows"
 * input n
 * print "*"
 * print "**"
 * if n<=i
 * 
 * STOP
* */
#include<stdio.h>
int main(){
    
    for(int i=1;i<=5;i++){
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("*");
            
        }printf("\n");
        
    }
    return 0;
}