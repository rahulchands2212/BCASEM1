#include<stdio.h>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("new.txt","a");

    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');

    fclose(fptr);

    return 0;
}