//NAME    - harshed
//CLASS   - cs a
//ROLL NO - 43
//EXPERIMENT NO-11
//EXPERIMENT NAME - To write a program to perform Matrix addition and matrix multiplication.

#include<stdio.h>



int m,n;
int a[100][100];
int b[100][100];

void input()
{
printf("\n ENTER HOW MANY ROWS :");
scanf("%d",&m);
printf("\n ENTER HOW MANY COLS :");
scanf("%d",&n);

printf("\n MATRIX 1 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   
}
printf("\n MATRIX 2 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    scanf("%d",&b[i][j]);
   
}

}

void main()
{
input();
printf("\n MATRIX 1 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
   
}
printf("\n MATRIX 2 :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",b[i][j]);
   
}
int sum[m][n];
int multi[m][n];

for(int i=0;i<m;i++)
{
   
    for(int j=0;j<n;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
        multi[i][j]=0;
        for(int k=0;k<m;k++)
        {
            multi[i][j]=multi[i][j]+(a[i][k]*b[k][j]);
        }
    }

}

//print
printf("\n THE ADDITION OF MATRIX :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",sum[i][j]);
   
}

if(m==n){
printf("\n THE MULTI OF MATRIX :");
for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++)
    printf("%d ",multi[i][j]);

}
}

else
printf("\n MULTI NOT POSSIBLE ");

}

//-----------------OUTPUT---------------------

//MATRIX 1 :
//1 2 3
//2 3 4
//5 6 7
//MATRIX 2 :
//3 5 2
//7 1 4
//3 8 4
//THE ADDITION OF MATRIX :
//4 7 5
//9 4 8
//8 14 11
//THE MULTI OF MATRIX :
//26 31 22
//39 45 32
//78 87 62


//MATRIX 1 :
//1 2
//3 4
//2 4
//MATRIX 2 :
//3 2
//4 3
//4 2
//THE ADDITION OF MATRIX :
//4 4
//7 7
//6 6
//MULTI NOT POSSIBLE