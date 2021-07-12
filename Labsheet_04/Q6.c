#include <stdio.h>
#include <stdlib.h>
float factorial(int x);
int main()
{
    int n, r;
    float nCr;
    printf("\nCALCULATE nCr\n");
    printf("\nEnter positive values for n and r : (EX:- 3,4) ");
    scanf("%d,%d", &n, &r);
    //nCr = n!/(r! *(n-r)!)
    nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("\n %dC%d = %0.2f", n, r, nCr);
    return 0;
}
float factorial(int x)
{
    int facto=1, i;
    for(i=1; i<=x; i++)
    {
        facto = facto*i;
    }
    return(facto);
}
