/*
Write a C program that dynamically allocates memory for n integers, takes input from the user, stores the integers in a file, reads them back from the file, calculates their sum, prints the result, and properly releases all allocated memory and closes the file.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //input memory ;
    int m;
    printf("enter total number for memory size : ");
    scanf("%d",&m);

    //allocated memory ;
    int *ptr; 
    ptr = (int *)malloc(m*sizeof(int));

    //check memory;
    if(ptr == NULL){
        printf("memory allocation failed");
        return 0;
    }

    //take input number ;
    printf("enter numbers :\n");
    for(int i=0;i<m;i++){
        scanf("%d",&ptr[i]);
    }  

    //file handling;
    FILE *p;
    p = fopen("record.txt","w");

    //checking;
    if(p==NULL){
        printf("file not created");
        free(ptr);
        return 0;
    }

    //store numbers in file;
    for(int i=0;i<m;i++){
     fprintf(p,"%d ",ptr[i]);
    }
 
    fclose(p);


    //open file read mode;
    p = fopen("record.txt","r");
    int sum=0;
    for(int i=0;i<m;i++){
        fscanf(p,"%d",&ptr[i]);
        sum+=ptr[i];
    }
    
    //print;
    printf("sum = %d",sum);

    fclose(p);
       free(ptr);
    return 0;
}