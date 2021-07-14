#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, j,mul,a=1 ,b=1;
    int array[100][100];
    printf("\t\t ***************MULTIPICATION TABLE******************\n\n");
    for(i=0; i<10; i++)
    {
        printf("\t%d",a);
        for(j=0; j<10; j++)
        {
            mul=a*b;
            array[i][j]= mul;
            b++;
        }
        b=1;
        a++;


    }
    printf("\n\t~\t~\t~\t~\t~\t~\t~\t~\t~\t~\n\n");

    for(i=0; i<10; i++)
    {
        printf("%d >\t", array[0][i]);
        for(j=0; j<10; j++)
        {
          printf("%d ", array[i][j]);
          printf("\t");

        }

        printf("\n\t--------------------------------------------------------------------------\n");

    }
    return 0;

}
