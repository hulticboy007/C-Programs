// program to perform sequential and binary search using functions

#include<stdio.h>

int sequential(int arr[],int find,int length){
    int position,flag=0,x=0;
    for (int i = 0; i < length; i++)

    {
        if (find==arr[i])
        {
            /* code */
            flag=1;
            position=i;
            break;
        }
    
}
if(flag==1){
    return position;
}else{
    return 0;

}
}
int main(){
    int n,i,find,bin,seq;
    printf("Array length: \n");
    scanf("%d",&n);
    printf("Enter array: \n");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&find);
    seq=sequential(arr,find,n);
    printf("sequential: %dth index",seq);
    // bin=binary(arr,find);
    // printf("binary: %dth",bin);


}