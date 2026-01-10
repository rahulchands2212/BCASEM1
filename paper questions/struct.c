#include<stdio.h>

struct student{
    char name[20];
    int standard;
}s[3];

int main(){
    ///intput;
    for(int i=0;i<3;i++){
        printf("enter name : ");
        fgets(s[i].name,20,stdin);

        printf("enter standard : ");
        scanf("%d",&s[i].standard);
        getchar();
    }

    for(int i=0;i<3;i++){
        printf("%s",s[i].name);
        printf("%d\n",s[i].standard);
    }

    return 0;
}