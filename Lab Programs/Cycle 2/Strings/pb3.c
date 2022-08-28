// To write a program to compare two strings without using any funnctions

#include<stdio.h>
#include<string.h>

int main(){
    int flag=0;
    char s1[30]="Abdulla";
    char s2[30]="Abdulla";
    for (int i = 0; s1[i]!='\0'||s2[i]!='\0'; i++)
    {
        /* code */
        if (s1[i]!=s2[i])
        {
            /* code */
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        /* code */
        printf("Not same");
    }else{
        printf("Same");
    }
    
    }
    