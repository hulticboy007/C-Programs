#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ft,*fp;
    char ch;
    ft=fopen("test1.txt","r");
    if (ft==NULL)
    {
        printf("Invalid file");
        exit(1);
    }
    fp=fopen("test3.txt","w");
    if (fp==NULL)
    {
        printf("Invalid input");
        exit(2);
    }
    
    while ((ch=fgetc(ft))!=EOF)
    {
        fputc(ch,fp);
    }
    printf("Successfully copied!");
    fclose(ft);
    fclose(fp);
    return 0;
}
    
    
