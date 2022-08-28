// program to concatenate without strcat function

int main(){
    char fname[30], lname[10],l1,l2;
    printf("Enter the first name: ");
    gets(fname);
    printf("Enter the last name: ");
    gets(lname);
    printf("Concatanation without using function\n");
    l1=strlen(fname);
    l2=strlen(lname);
    for (int i = 0; i < l2; i++)
    {
        fname[l1+i]=lname[i];
    }
    printf("%s",fname);
}