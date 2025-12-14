#include<stdio.h.>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("store.txt","w");  // create file;

    //define string and take input by user;
    char string[500];
    printf("write your message \n");
    gets(string);

    //store all message in file;
    fputs(string,fptr);
    
    //close file;
    fclose(fptr);

    return 0;
}