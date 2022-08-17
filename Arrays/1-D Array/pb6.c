#include<stdio.h>

int main(){
    int arr1[5],arr2[5],sum[5];
    printf("Enter the first arr1: ");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        
        scanf("%d",&arr1[i]);
    }
    printf("Enter the first arr2: ");
    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d",&arr2[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        sum[i]=arr1[i]+arr2[i];
        printf("The %d no. in sum[%d] is %d\n",i,i,sum[i]);
    }
    printf("The sum  arr is: ");
    for (int i = 0; i < 5; i++)
    {
        /* code */
         printf("%d",sum[i]);
    }
    
   
    return 0;
    

}