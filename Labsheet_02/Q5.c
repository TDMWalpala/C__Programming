#include <stdio.h>
#include <stdlib.h>
 void main(){
     int N=5,i;
     double X=1.3,Y=1.0;
     printf("calculate (X)^N \n");
     for(i=0;i<N;i++){
        Y=Y*X;
     }
     printf("(%0.1lf)^%d = %f",X,N,Y);
   getch();
 }
