// program to pass string as an argument

#include<stdio.h>

void display(char[]);
int main(){
    char string[]="";
    printf("Enter the string: ");
    scanf("%s",string);
    display(string);
}
void display(char string[]){
    printf("The inputted string is %s",string);
}