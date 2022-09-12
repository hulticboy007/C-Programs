// To write a program using pointers to access the elements of an array and count the
//number of occurrences of the given number in the array. 

#include <stdio.h>

int main(void) {
    int arr[100];
    int n;

    // Inputing array
    printf("Enter number of elements in array(max: 100): ");
    scanf("%d", &n);   
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    // Initialising pointer
    int *p = arr;

    // Getting element whose occurances is to be tracked
    int element;
    int count = 0;
    printf("Enter element to find occurance: ");
    scanf("%d", &element);

    // Beginning algorithm
    for (int i = 0; i < n; i++) {
        if (*(p+i) == element) {
            count++;
        }
    }

    printf("Number of occurances: %d\n", count);

    return 0;
}