/*
read student record*/

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("student_record.txt","r");

    int st;
    st = fgetc(fptr);
    while(st!=EOF){
        printf("%c",st);
        st = fgetc(fptr);
    }

    fclose(fptr);
    return 0;

}