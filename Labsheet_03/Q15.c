#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main(){
     int A,B,C;
     printf("Enter a,b,c values,(ex:-ax*x+bx+c) :");
     scanf("%d,%d,%d",&A,&B,&C);
     float disc,deno,x1,x2;
     disc = (B*B) - (4*A*C);
     deno = 2*A;
     if(disc>0){
        printf("THE ROOTS ARE REAL ROOTS\n");
        x1 = (-B/deno)+(sqrt(disc)/deno);
        x2 = (-B/deno)-(sqrt(disc)/deno);
        printf("%0.2f,\t%0.2f",x1,x2);
     }else if(disc==0){
        printf("THE ROOTS ARE REPEATED ROOTS\n");
        x1 = (-B/deno);
        printf("%0.2f",x1);
     }else{
        printf("THE ROOTS ARE IMAGINARY ROOTS”");

     }
    getch();
 }
