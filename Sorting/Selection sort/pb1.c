//program to sort elements using selection sort

#include<stdio.h>
int main(){
    int n;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
}