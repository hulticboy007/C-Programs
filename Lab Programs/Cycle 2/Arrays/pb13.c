//harshed abdulla 
//program to sort numbers in an array using bubble sort
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

/* output
Enter the array length: 5
Enter the 0 element: 1
Enter the 1 element: 2
Enter the 2 element: 23
Enter the 3 element: 45
Enter the 4 element: 32
Array after implementing bubble sort: 1  2  23  32  45  
*/
    