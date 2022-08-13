/** Program to read an array of integers and count total no. of even and add
 * 
 * 
 * ALGORITHM
 * 
 * START
 * 
 * 
 * 
 * STOP
* */
#include<stdio.h>
int main(){
    int b;
    int ecount=0;
    int ocount=0;
    printf("Enter the datas in array: ");
    scanf("%d",&b);
    
    int a[b];
    printf("Enter %d numbers: ",b);
    for (int i = 0; i <=b-1; i++) 
    {
        /* code */
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=b-1;j++){
        if(a[j]%2==0){
            printf("a[%d]=%d number is even\n",j,a[j]);
            ecount++;
        }else{
            printf("a[%d]=%d number is odd\n",j,a[j]);
            ocount++;
        }
    }
    printf("The total no. of even in array: %d\n",ecount);
    printf("The total no. of odd in array: %d\n",ocount);
    
}