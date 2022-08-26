// Program to search for an element using binary search


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //if elements are not sorted
    for (int j = 0; j < n; j++)
    {
        if (a[j]>a[j+1])
        {
            /* code */
            printf("Not sorted properly\n");
            return 0;
        }
        
    }
    int key;
    scanf("%d",&key);
    int low=0,high=n-1,mid=(low+high)/2;
    while (low<=high)
    {
        /* code */
        if (a[mid]<key)
        {
            /* code */
            low=mid+1;
        }else if (a[mid]==key)
        {
            /* code */
            printf("%d found at location %d\n",key,mid+1);
            break;
        }else if (a[mid]>key)
        {
            /* code */
            high=mid+1;
        }
        mid=(low+high)/2;
    }
    if (low>high)
    {
        printf("Element not found\n");
    }
    return 0;
        
        
    }
    
    
