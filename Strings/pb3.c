//program to count characters in a string

#include<stdio.h>
#include<string.h>
int main(){
    int count;
    char name[10];
    printf("Enter your name: ");
    gets(name);
    puts(name);
    count=strlen(name);
    printf("Characters in the string including space are: %d\n",count);
}
