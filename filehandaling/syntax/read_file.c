#include<stdio.h>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("name.txt","r");   //open  file in read mode;

    //print file untill end of file;
    char ch;
    ch = fgetc(fptr);
    while(ch !=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    //close file
    fclose(fptr);
    return 0;
}