//program to arrang names in alphabetical order

#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j;
    printf("no. of names: ");
    scanf("%d",&n);
    char names[n][100],s[100];
    for (i = 0; i <n; i++)
    {
        scanf("%s",names[i]);
    }
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(names[i],names[j])>0){
            strcpy(s,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],s);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   for(i=0;i<n;i++){
      printf("%s\n",names[i]);
   }
    
}