/* To write a program to perform string manipulation functions like string concatenations,
comparison, find the length and string copy without using library functions. */ 
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char first[50],sec[50],l1,l2;
    printf("Enter the first string: ");
    gets(first);
    printf("Enter the second string: ");
    gets(sec);
    printf("\n Concatanation without using function \n");
    l1=strlen(first);
    l2=strlen(sec);
    for (i = 0; i < l2; i++)
    {
        first[l1+i+1]=sec[i];
    }
    printf("%s\n",first);
    printf("\n String Comparison: \n");
}
