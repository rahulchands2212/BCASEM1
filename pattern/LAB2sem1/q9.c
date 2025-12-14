#include<stdio.h>
int main(){
    char character ;
    printf("enter character = ");
    scanf("%c",&character);

    if(character>='a' && character<='z'){        //ascii value of small letter from 97 to 122;
        printf("this is small case letter");   
    }else if(character>='A' && character<='Z'){   //ascii value of captial letter from 65 to 90;
        printf("this is captial case letter");
    }else if(character>='0' && character<='9'){       //ascii value of digit from 48 t0 57;
        printf("this is digit");
    }else{
        printf("this is symbol");
    }
    return 0;
}