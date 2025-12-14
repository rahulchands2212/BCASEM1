#include<stdio.h>

int main(){
    //file pointer
    FILE *fptr;
    //open file;
    fptr = fopen("student.txt","w");

    //intput name;
    char name[20];
    printf("enter name : ");
    fgets(name,20,stdin);

    //input age;
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    //store in file;
    fprintf(fptr,"name : %s",name);
    fprintf(fptr,"age : %d",age);

    fclose(fptr);

    return 0;
}