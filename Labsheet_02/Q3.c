#include <stdio.h>
#include <stdlib.h>
void main(){
    int m=40,n=20,o=20,p=30;
    if(m>n&&m!=0){
        printf("1\n");
    }else{                //1. Answer = 1
        printf("0\n");
    }


    if(o>p||p!=20){
        printf("1\n");
    }else{               //2. Answer = 1
        printf("0\n");
    }


    if(!(m>n&&m!=0)){
        printf("1\n");
    }else{               //3. Answer = 0
        printf("0\n");
    }
}
