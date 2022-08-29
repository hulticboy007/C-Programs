//program to use function for string

#include<stdio.h>
void main(){
    char fun();
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}
char fun(){
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    return c;
}