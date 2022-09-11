// return pointer from function

#include<stdio.h>

int* myaddress(int gps[]){
    return &gps;
}
int main(){
    int place;
    int gps[]={99,1,234,43};
    place=myaddress(gps);
    printf("%d",&place);    
}