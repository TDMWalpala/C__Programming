#include <stdio.h>
#include <stdlib.h>
 void main(){
     char c='B';
     int i=3,j=3,k=3;
     double x=0.0,y=2.3;

     printf((i&&j&&k)? "true\n":"flase\n");
     printf((x||i&&j-3)? "true\n":"flase\n");
     printf((i<j&&x<y)? "true\n":"flase\n");
     printf((i<j||x<y)? "true\n":"flase\n");
     printf(('A'<=c&&c<='Z')? "true\n":"flase\n");
     printf((c-1=='A'||c+1=='Z')? "true\n":"flase\n");
getch();
 }
