/*input from user then store than read.
*/

#include<stdio.h>

int main(){
    //file open;
    FILE *fptr;
    fptr = fopen("data.txt","w");

    //check
    if(fptr==NULL){
        printf("file not open");
        return 0;
    }

    //input;
    char text[60];
    printf("enter text not more than 60 char :\n");
    fgets(text,60,stdin);

    //store in data.txt;
    fprintf(fptr,"%s",text);

    //close file
    fclose(fptr);

    //open in read mode;
    fptr = fopen("data.txt","r");
    printf("\nopening in reading mode\n");

    //char by char read;
    int ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    
    fclose(fptr);

    return 0;
}