// To write a program to conacate two strings without using any funnctions

#include<stdio.h>
#include<string.h>

int main(){
    char fname[30], lname[10],l1,l2;
    printf("Enter the first name: ");
    gets(fname);
    printf("Enter the last name: ");
    gets(lname);
    printf("Concatanation without using function\n");
    l1=strlen(fname);
    l2=strlen(lname);
    for (int i = 0; i < l2; i++)
    {
        fname[l1+i+1]=lname[i];
    }
    printf("%s",fname);
}