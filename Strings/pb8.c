/** Program to reverse a number without using any function
 * ALGORITHM
* */
#include<stdio.h>
#include<string.h>

int main(){
   char ch;
   int l;
   char s1[30]="harshed";
   l=strlen(s1);
   for (int i = 0; i <= l/2; i++)
   {
    /* code */
    ch=s1[i];
    s1[i]=s1[l-i];
    s1[l-i-1]=ch;
   }
    puts(s1);
}