/** harshed abdulla
 * Program to find the prime numbers in a range

* */
#include<stdio.h>
int main(){
    int a,b,flag;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    for (int i =a; i <=b; i++)
    {
        flag=0;
        for (int j = 1; j <=i;j++)
        {
            /* code */
            if (i%j==0)
            {
                /* code */
                flag++;
            }
            
        }
        if (flag==2)
        {
            /* code */
            printf("%d\n",i);
        }
        
        
    }
    return 0;
}

/* output
Enter the two numbers: 5 45
5
7
11
13
17
19
23
29
31
37
41
43
*/