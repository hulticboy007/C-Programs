// C program to input N numbers and store them in an array.
// Do a linear search for a given key and report success or failure.


#include<stdio.h>
int main(){
    int arr[6],i,n,found;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %d value in arr[%d]: ",i,i);
        scanf("%d",&arr[i]);
    }
    printf("arr: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&n);
    printf("%d is the value to be searched from the array\n",n);


    for ( i = 0; i < 6; i++)
    {
        /* code */
        if (arr[i]==n)
        {
            /* code */
            found=1;
            break;
        }
    }
    if (found==1)
    
        /* code */
        printf("Found\n");
    else
        printf("Not found\n");
    

}