/* To write a program to perform string manipulation functions like string concatenations,
comparison, find the length and string copy without using library functions. */ 
#include<stdio.h>
#include<string.h>

int main(){

    printf("\n Concatanation,Comparison,Length and Copy without using function \n\n");
    
    
    int i,point=0,flag=0,c1=0,c2=0,choice;
    char first[30],sec[30],l1,l2,string2[30];
    printf("Enter the first string: ");
    scanf("%s",first);
    printf("Enter the second string: ");
    scanf("%s",sec);
    printf("Options\n1.String Comparison\n2.String Length\n3.String Concatanation\n4.String Copy\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    
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
	break;
	
	case 2:
    
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
	break;
	case 3:
    printf("\n String Concatanation : ");
    l1=strlen(first);
    l2=strlen(sec);
    for (i = 0; i <= l2; i++)
    {
        first[l1+i]=sec[i];
    }
    printf("%s",first);
    break;
    case 4:
    for ( i = 0; first[i]!='\0'; ++i)
    {
        string2[i]=first[i];
    }
    string2[i] = '\0';
    printf("\nCopied string: ");
    printf("%s",string2);
    break;
    default:
    printf("Invalid input");
    break;
}
}
