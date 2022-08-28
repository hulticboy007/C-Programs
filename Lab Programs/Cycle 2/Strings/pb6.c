/** Program to sort names according to alphabetical order
 * ALGORITHM
* */
#include<stdio.h>
#include<string.h>

int main(){
    int n,i;
    char s[100][100],s1[100];
    printf("Enter the no. of names");
    scanf("%d",&n);
    printf("Enter the names: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s",s[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            /* code */
            if (strcmp(s[i],s[i+1])>1)
            {
                /* code */
                strcpy(s,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],s1);
            }

            
        }
        
    }
    printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",s[i]);
   }
    
}