#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, j,rows=6;
for(i=1; i<=rows; i++){
    for(j=i; j<=rows; j++){
        printf("*");
    }
    for(j=1; j<=i; j++){
        printf(" ");
    }
    printf("\n");
    }

getch();
}
