/* second method to read q3 */

#include<stdio.h>
int  main(){
    FILE *ptr;
    ptr = fopen("record.txt","r");
//print on screen;
    int ch;
    ch = fgetc(ptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(ptr);
    }

    //reset at starting;
    rewind(ptr);    

    //logic;
    int p;  //for tempory storage;
    int sum = 0;
    while(fscanf(ptr,"%d",&p)!=EOF){
        sum+=p;
       
    }
    printf(" = %d",sum);

    fclose(ptr);
    return 0;
}