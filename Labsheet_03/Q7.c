#include <stdio.h>
#include <stdlib.h>
 void main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c>='a' && c<='z'){
        printf("Uppercase");
    }else if(c>='A' && c<='Z'){
        printf("Lowercase");
    }else{
        printf("Not a letter");
    }

    getch();
 }
