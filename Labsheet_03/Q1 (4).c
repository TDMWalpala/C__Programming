#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,k=10;
    for(i=1; i<=k; i++){

        for(j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}

