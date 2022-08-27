// program to sort numbers in an array using bubble sort
#include<stdio.h>
int main(){
    int n,x,y,temp;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&a[i]);
    }
        for(x = 0; x < n - 1; x++){       

        for(y = 0; y < n - x - 1; y++){          

            if(a[y] > a[y + 1]){               

                temp = a[y];

                a[y] = a[y + 1];

                a[y + 1] = temp;

            }

        }

    }

    printf("Array after implementing bubble sort: ");

    for(x = 0; x < n; x++){

        printf("%d  ", a[x]);

    }

    return 0;

}
        
    