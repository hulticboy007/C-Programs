//HARSHED ABDULLA CSA 43
//To write a program to count the number of characters,lines in a file. 
// program to count the number of lines and characters in a file

#include<stdio.h>
int main(){
    char ch;
    int count=0,lcount=1;
    char fname[200];
    FILE *cou;
    printf("Enter the file name: ");
    scanf("%s",fname);
    cou=fopen(fname,"r");
    if (cou==NULL)
    {
        printf("Invalid input, try again!\n");
        return 1;
    }
    while ((ch=fgetc(cou))!=EOF)    
    {
        
        count++;
        if (ch=='\n')
        {
            lcount++;
        }
        
    }
    printf("The character and word count in %s file are:\n",fname);
    printf("Character count: %d\n",count);
    printf("Line count: %d\n",lcount);
    return 0;
}
//-----------------OUTPUT---------------------

/* Enter the file name: test.txt
The character and word count in test.txt file are:Character count: 47
Line count: 2 */