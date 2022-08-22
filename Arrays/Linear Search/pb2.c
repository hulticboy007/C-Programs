// C program to input N numbers and store them in an array.
// Do a linear search for a given key and report success or failure.


#include<stdio.h>
int main(){
    int arr[6];
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %d value in arr[%d]: ",i,i);
        scanf("%d",&arr[i]);
    }
    printf("The array values entered are: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d,",arr[i]);
    }
}