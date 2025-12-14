/*

A 
1 2 
B C D
3 4 5 6
E F G H I

*/

#include<stdio.h>
int main(){
    int i,j,num=1,last=65;
for( i=1;i<=5;i++){
    for( j=1;j<=i;j++){
        if(i%2==0){
          printf("%d ",num);
        num++;
    }else{
        printf("%c ",last);
        last++;
    }
}
 printf("\n");
}
return 0;
}