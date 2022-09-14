// program to sequntial and binary search 

#include<stdio.h>
void sequential(int y){
    int s,pos,flag=0;
    printf("Enter array length: ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter array: ");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < s; k++)
    {
        if (y==arr[k])
        {
            flag=1;         
            pos=k;
            break;
        }    
    }
    if (flag==1)
    {
        printf("Position: %d \n",pos+1);
    }else{
        printf("Not found\n");
    }       
}
void binary(int l){
    int s,pos,flag=0;
    printf("Enter array length: ");
    scanf("%d",&s);
    int arr[s];
    printf("Enter array in ascending order: ");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=0,high=s-1,mid=(high+low)/2;
    
       while (low<=high)
    {
        if (arr[mid]<l)
        {
            low=mid+1;  
        }else if (l==arr[mid])
        {
            printf("position: %d",mid+1);
            break;
        }else if (arr[mid]>l)
        {
            high=mid+1;
        } 
        mid=(low+high)/2;               
    }                
}

int main(){
    int n,i;    
    printf("Choose search: \n1.Sequential\n2.Binary\n");
    scanf("%d",&n);
    printf("Enter value to be searched: \n");
    scanf("%d",&i);
    switch (n)
    {
    case 1:
        sequential(i);
        break;
    case 2:
        binary(i);
        break;
    default:
        printf("Invalid input\n");
        break;
    }
}