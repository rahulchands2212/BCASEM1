#include<stdio.h>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("buffer.txt","w");

    struct detail{
        char name[10];
        int rollno;
        char name2[10];
    }s1;

    printf("Name : ");
    fgets(s1.name,10,stdin);

    printf("Rollno : ");
    scanf("%d",&s1.rollno);
    getchar();      //remove the \n buffer


    printf("name : ");
    fgets(s1.name2,10,stdin);

    fprintf(fptr,"name : %s",s1.name);
    fprintf(fptr,"rollno : %d\n",s1.rollno);
    fprintf(fptr,"name2 : %s\n",s1.name2);

    fclose(fptr);
    return  0;
}