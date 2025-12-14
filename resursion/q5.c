/*
tower of hanoi
*/

#include<stdio.h>

void towerofhanoi(int n, char source,char helper,char destination){
if(n==1){
    printf("move disk %d %c to %c\n",n,source,destination);
    return;
}
towerofhanoi(n-1,source,destination,helper);    

printf("move disk %d %c to %c\n",n,source,destination);
towerofhanoi(n-1,helper,source,destination);

}


int main(){
towerofhanoi(3,'s','h','C');
return 0;
}