//program to sequential and binary search using functions

#include<stdio.h>
void sequential(int z){
    printf("\nSEQUENTIAL SEARCH:  \n");
    
    int n,i,find,flag,bin,seq,choice,position,length;
    printf("Array length: \n");
    scanf("%d",&length);
     printf("Enter array: \n");
    int arr[n];
    for (i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < length; i++)
    {
        if (z==arr[i])
        {
            /* code */
            flag=1;
            position=i;
            break;
        }
    
	}
	if(flag==1){
    printf("Value found at position %d position\n",position+1);
	}else{
    printf("Value not found\n");
	}
}

void binary(int k){
    printf("\nBINARY SEARCH:  \n");
    
    int n,i,find,bin,seq,choice,length;
    printf("Array length: \n");
    scanf("%d",&length);
    printf("Enter the values in ascending order\n");
    printf("Enter array: \n");
    int arr[n];
    for (i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=0,high=length-1,mid=(low+high)/2;
    while (low<=high)
    {
        /* code */
        if (arr[mid]<k)
        {
            /* code */
            low=mid+1;
        }else if (arr[mid]==k)
        {
            /* code */
            printf("%d found at index %d\n",k,mid);
            break;
        }else if (arr[mid]>k)
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
    }
    
int main(){
	int n;
	printf("Enter the value to be searched: ");
	scanf("%d",&n);
    int choice,seq;
    printf("Array to be searched in? \n1.binary\n2.sequential\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    binary(n);
    break;
    case 2:
    sequential(n);
    break;
    default:
    printf("invalid input\n");
    }
    }
    	
