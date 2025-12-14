#include<stdio.h>
int main(){
    //define data type;
    int n,i;
    
    //take input ;
    printf("enter number = ");
    scanf("%d",&n);

    //starting for loop;
    int first=0,second=1;
   for(i=1;i<=n;i++){
        //logic
         printf("%d\t",first);
        int next = first+second;
        first=second;
        second = next;
    }
    return 0;
}
