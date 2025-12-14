/*
create a file  write your name in file then open in read mode then read the file
*/

#include<stdio.h>
#include<wchar.h>


int main(){
    FILE *fptr;
    fptr = fopen("info.txt","w");   //opening file in write mode;

    if(fptr == NULL){
        printf("file not created");
    }else{
        printf("File created sucessfully\n");
    }

    //write in file;
    fputc('R',fptr);
    fputc('A',fptr);
    fputc('H',fptr);
    fputc('U',fptr);
    fputc('L',fptr);
//then close file
fclose(fptr);


//after that open file again in read mode;
    fptr = fopen("info.txt","r");

    printf("Reading from file\n");

    //print char until the end of file;
    int ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;


}