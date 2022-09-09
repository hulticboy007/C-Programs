//program to arrang names in alphabetical order

#include<stdio.h>

int main(){
    int n;
    printf("no. of names: ");
    scanf("%d",&n);
    char names[n][100];
    for (int i = 0; i <n; i++)
    {
        scanf("%s",names[i]);
    }
    
    
}