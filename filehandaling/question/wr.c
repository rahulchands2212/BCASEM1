// using mode read and write at one time wr;
#include<stdio.h>
int main(){

    char string[500];
    printf("write down :\n");
    fgets(string,500,stdin);

    //open a file then store in file ;
    FILE *ptr;
    ptr = fopen("try.txt","w+");
    fprintf(ptr,"%s",string);

    rewind(ptr);    //reset point;

    //read 
    printf("by file\n");
    while(fgets(string,500,ptr)!=NULL){
        printf("%s",string);
    }

    fclose(ptr);
    return 0;
}