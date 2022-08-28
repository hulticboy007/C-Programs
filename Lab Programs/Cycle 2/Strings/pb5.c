/** Program to convert from upper case to lower case without using functions
 * ALGORITHM
* */
#include<stdio.h>
#include<string.h>

int main(){
    char s1[30]="HaRsHeD1@1";
    int l;
    l=strlen(s1);
    for (int i = 0;s1[i]!='\0'; i++)
    {
        /* code */
        if (s1[i]>='A'&&s1[i]<='Z')
        {
            /* code */
            s1[i]=32+s1[i];
        }
        
    }
    printf("%s",s1);
    
}