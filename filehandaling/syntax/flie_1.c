#include<stdio.h>
#include<wchar.h>

int main(){
    FILE  *fptr;
    fptr = fopen("name.txt","r");   //open file;
    
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);

    fscanf(fptr,"%d",&ch);
    printf("%d",ch);

    fscanf(fptr,"%d",&ch);
    printf("%d",ch);

    fscanf(fptr,"%d",&ch);
    printf("%d",ch);
    
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);

    fclose(fptr);

    return 0;
}
