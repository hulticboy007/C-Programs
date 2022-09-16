// program to copy string from one file another

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fs,*ft;
    char ch;
    fs=fopen("test.txt","r");
    if (fs==NULL)
    {
        printf("Invalid file");
        exit(1);
    }
    ft=fopen("test2.txt","w");
    if (ft==NULL)
    {
        printf("Invalid");
        exit(2);
    }
    while (1)
    {
        ch=fgetc(fs);
        if(ch==EOF){
            break;
        }else{
            fputc(ch,ft);
        }
    }
    fclose(fs);
    fclose(ft);
    return 0;
}
    
