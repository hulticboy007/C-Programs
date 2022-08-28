// To write a program to perform string manipulation functions like string concatenations,
// comparison, find the length and string copy without using library functions.

#include<stdio.h>
#include<string.h>

int main(){
    char fname[10], lname[10];
    printf("Enter the first name: ");
    gets(fname);
    printf("Enter the last name: ");
    gets(lname);
    strcat(fname,lname);
    puts(fname);
}