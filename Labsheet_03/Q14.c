#include <stdio.h>
#include <stdlib.h>
int main(){
int A,B,C;
printf("Enter three numbers,(ex:- 1,4,7) :");
scanf("%d,%d,%d",&A,&B,&C);
if(A>B){
    if(A>C){
        printf("%d is largest number",A);
    }else{
    printf("%d is largest number",C);
    }

}else{
    if(B>C){
        printf("%d is largest number",B);
    }else{
     printf("%d is largest number",C);
    }
}
getch();
}
