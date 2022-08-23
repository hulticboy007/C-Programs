// Program to search through an array and output the index where it is located


#include<stdio.h>
int main(){

    int n,i,j,arr[6];
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
            j=i;
            break;
        }else{
            printf("Value not found");
        }
        
    }
    
    printf("The index of the value in array is %d.",i);
    
    
}