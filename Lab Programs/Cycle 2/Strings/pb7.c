/* To write a program to perform string manipulation functions like string concatenations,
comparison, find the length and string copy without using library functions. */ 
#include<stdio.h>
#include<string.h>

int main(){

    printf("\n Concatanation,Comparison,Length and Copy without using function \n\n");
    int i,point=0,flag=0,c1=0,c2=0;
    char first[30],sec[30],l1,l2,string2[30];
    printf("Enter the first string: ");
    scanf("%s",first);
    printf("Enter the second string: ");
    scanf("%s",sec);
    printf("\n String Comparison: ");
    for (i = 0; first[i]!='\0' || sec[i]!='\0'; i++)
    {
        if (first[i]!=sec[i])
        {
            
            flag=1;
            point=i;
            break;

        }
        
    }
    if (flag==1)
    {
        printf("Not same, similarity broke at index %d ",point);
    }else{
        printf("Same");
    }

    
    for ( i = 0; first[i]!='\0'; i++)       
    {
        c1++;
    }
    for ( i = 0; sec[i]!='\0'; i++)       
    {
        c2++;
    }
    printf("\n First String Length : %d",c1);
    printf("\n Second String Length : %d",c2);

    printf("\n String Concatanation : ");
    l1=strlen(first);
    l2=strlen(sec);
    for (i = 0; i <= l2; i++)
    {
        first[l1+i]=sec[i];
    }
    printf("%s",first);
    
    for ( i = 0; first[i]!='\0'; i++)
    {
        string2[i]=first[i];
    }
    printf("\nCopied string: %s",string2);
    
}
