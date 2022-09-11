// program to return string in function

#include<stdio.h>

char* harshed(){
    return "abdulla is king!!";
}

int main(){
    char* hack;
    hack=harshed();
    hack[0]='A'; 
    printf("%s",hack);
}
