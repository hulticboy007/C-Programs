//HARSHED ABDULLA CS A ROLL NO. 43

// program to display the marks of students

#include<stdio.h>


int main(){
    struct marks
{
    char name[30];
    char subject[20];
    float marks;
    int mobile;
};

    struct marks stud[3];
    int n,i;
    printf("Number of students: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter details of %d : \n",i+1);
        printf("Name: ");
        scanf("%s",stud[i].name);
        printf("Subject: ");
        scanf("%s",stud[i].subject);
        printf("Marks: ");
        scanf("%f",&stud[i].marks);
        printf("Mobile no: ");
        scanf("%d",&stud[i].mobile);
    }
    for (i = 0; i < n; i++)
    {
        printf("Mark sheet data of %d: ",i+1);
        printf("Name:%s  Subject:%s  Marks:%f  Mobile:%d \n",stud[i].name,stud[i].subject,stud[i].marks,stud[i].mobile);
    }
    
    
}