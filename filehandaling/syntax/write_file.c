#include<stdio.h>
#include<wchar.h>

int main(){
    FILE *fptr;
    fptr = fopen("name.txt","w");

    putc('M',fptr);
    putc('a',fptr);
    putc('n',fptr);
    putc('g',fptr);
    putc('o',fptr);

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    fclose(fptr);

    return 0;
}