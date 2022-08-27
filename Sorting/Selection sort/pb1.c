//program to sort elements using selection sort

#include<stdio.h>
int main(){
    int n,i,j,p,s;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        p=i;
    }
    for ( j = i+1; j < n; j++)
    {
        /* code */
        if (a[p]>a[j])
        {
            /* code */
            p=j;
        }
        if (p!=i)
        {
            /* code */
            s=a[i];
            a[i]=a[p];
            a[p]=s;
        }
        
    }
    printf("Sorted Array: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    
}