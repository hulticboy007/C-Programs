// program to count the number of lines and characters in a file

#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    int ccount=1,wcount=0;
    char fname[200];
    FILE *count;
    printf("Enter the file name: ");
    scanf("%s",fname);
    count=fopen(fname,"r");
    if(count==NULL){
        printf("File not found\n");
        return 1;
    }
    while ((ch=fgetc(count))!=EOF)
    {
            ccount++;
            if (ch=='\n')
            {
                wcount++;
            }
    } 
    printf("The character count: %d\n",ccount);
    printf("The line count: %d",wcount); 
    return 0; 
}