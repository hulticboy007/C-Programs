// program to get data using gets 

#include<stdio.h>

int main(){
    char name[10];
    printf("Enter your name: ");
    gets(name);
    printf("%s",name);
}