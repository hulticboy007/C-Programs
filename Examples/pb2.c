// program to count the number of lines and characters in a file

#include<stdio.h>
int main(){
char ch;
int chcount=0,lcount=1;
int iword=0;
char filename[1024];
FILE *pro;

printf("Enter a file name: ");
scanf("%s",filename);

pro=fopen(filename,"r");

if (pro==NULL)
{
    printf("Error occured!");
    return 1;
}
while ((ch=fgetc(pro))!=EOF)
{
    chcount++;
    if (ch=='\n')
    {
        lcount++;   
    }
       
}
printf("Number of characters: %d\n",chcount);
printf("Number of lines: %d\n",lcount);
}