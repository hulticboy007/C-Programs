// To write a program to conacate two strings without using any funnctions
#include<stdio.h>
#include<string.h>

int main(){
    char fname[30], lname[10],l1,l2;
    printf("Enter the first name: ");
    gets(fname);
    printf("Enter the last name: ");
    gets(lname);
    strcat(fname,lname);
    puts(fname);
    
}