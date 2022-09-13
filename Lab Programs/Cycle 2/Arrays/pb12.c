/**harshed abdulla 
 * Program to print the sum and average of elements in an array
* */
#include<stdio.h>
int main(){
    int sum=0,avg,k;
    printf("Enter the elements in the array: ");
    scanf("%d",&k);
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        printf("Enter the %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < k; j++)
    {
        sum=sum+arr[j];
    }
    avg=sum/k;
    printf("Sum is %d\n",sum);
    printf("Average is %d\n",avg);
}

/* output
Enter the elements in the array: 5
Enter the 0th element: 1
Enter the 1th element: 2
Enter the 2th element: 3
Enter the 3th element: 4
Enter the 4th element: 5
Sum is 15
Average is 3
*/