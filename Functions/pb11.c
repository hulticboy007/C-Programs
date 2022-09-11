// return pointer from function

#include<stdio.h>

int* myaddress(int gps[]){
    gps=gps+3;
    return gps;
}
int main(){
    int *place;
    int gps[]={99,1,234,43};
    place=myaddress(gps);
    printf("%d",*place);    
}