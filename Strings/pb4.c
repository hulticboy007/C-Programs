// program to the string length without using strlen

#include<stdio.h>

int main(){
    char name[50],i=0,count=0;
    printf("Enter your name: ");
    gets(name);
    puts(name);
    while (name[i] != '\0')
    {
        /* code */
        count++;
        i++;

    }
    printf("%d\n",count);

}

