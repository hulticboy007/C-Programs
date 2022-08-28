/** Program to convert from upper case to lower case using strlwr
 * ALGORITHM
* */
#include<stdio.h>
#include<string.h>

int main(){
    char s1[30]="HaRsHeD1@1";
    strlwr(s1);
    printf("%s",s1);
}