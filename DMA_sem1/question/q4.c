/*
User se rows aur columns input lo,
phir dynamic 2D array banao aur ye kaam karo:

🔹 Requirements

1️⃣ malloc se dynamic 2D array banao (int **)
2️⃣ User se matrix ke elements input lo
3️⃣ Har row ka sum print karo
4️⃣ Properly memory free karo
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //input row and column;
    int row,column;
    printf("enter row and column : ");
    scanf("%d %d",&row,&column);

    //assign the row memory;
    int **ptr;  //pointer to pointer;
    ptr = (int **)malloc(row*sizeof(int *));

    //check;
    if(ptr==NULL){
        printf("memory not assign");
        return 0;
    }

    //assign size of column in each row;
    for(int i=0;i<row;i++){
        ptr[i] = (int *)malloc(column*sizeof(int));
    }

    //input matrix by user;
    printf("enter (%d x %d) matrix :\n",row,column);
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&ptr[i][j]);
        }
    }

    //traverse;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<column;j++){
            sum += ptr[i][j];
        }
        printf("Row %d sum = %d\n",i,sum);
    }

    //free the column memory;
    for(int i=0;i<row;i++){
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}