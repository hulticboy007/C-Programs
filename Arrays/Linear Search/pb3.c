// Program to search through an array and output the index where it is located


#include<stdio.h>
int main(){

    int n,i,arr[6],j,k=0;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %d value: ",i);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("\n");
    printf("Enter the value to be searched: ");
    scanf("%d",&n);
    printf("\n");
    for (i = 0; i < 6; i++)
    {
        
        if (n==arr[i])
        {
            k=1;
            j=i+1;
            
            break;
        }
        
    }
    if (k==1)
    {
         printf("The value is in position %d.",j);

    }else
    {
        printf("Value not found!");
    }
    
       
    return 0;
}