#include<stdio.h>
// write a program in c display the cube of the number up to integer;

int main(){
    int cube;
    printf("input number of term 5 ;\n");
    
    for(int i=1;i<=5;i++){
    cube = i*i*i;// we also use the #include<math.h> powf(i,3);
    printf("the number is %d ; ",i);
    printf("the cube is %d\n",cube);
}
return 0;
}