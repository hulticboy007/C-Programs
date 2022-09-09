/* To write a program to perform string manipulation functions like string concatenations,
comparison, find the length and string copy without using library functions. */ 
#include<stdio.h>
#include<string.h>
int main(){
    printf("\n Concatanation,Comparison,Length and Copy without using function \n\n");
    int i;
    char first[30],sec[30],l1,l2;
    printf("Enter the first string: ");
    scanf("%s",first);
    printf("Enter the second string: ");
    scanf("%s",sec);
    printf("\n Concatanation without using function : ");
    l1=strlen(first);
    l2=strlen(sec);
    for (i = 0; i <= l2; i++)
    {
        first[l1+i]=sec[i];
    }
    printf("%s",first);
    printf("\n String Comparison: \n");
}
