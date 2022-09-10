// program to take string as argument 

#include<stdio.h>

void mod(char[],char[]);

int main(){
    char str1[]="",str2[]="";
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    mod(str1,str2);
}
void mod(char str1[],char str2[]){
    int c=0,i;
    for (i= 0;str1[i]!='\0'; i++)
    {
        c=c+1;
    }
    printf("The length of first string is %d\n",c);
    str2[0]='A';
    printf("The second string is %s",str2);
}