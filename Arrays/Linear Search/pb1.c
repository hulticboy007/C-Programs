// Program to linear search through an array


#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value to be searched: ");
    scanf("%d",&n);
    printf("%d is the value to be searched from the array",n);
    int arr[6];
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %d value in arr[%d]: ",i,i);
        scanf("%d",&arr[i]);
    }
    printf("The array values entered are: ");
    for (i = 0; i < 6; i++)
    {
        printf("[%d,]",arr[i]);
    }
    
}