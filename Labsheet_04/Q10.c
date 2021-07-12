#include <stdio.h>
#include <stdlib.h>
void factorial(int x);
int main()
{
    int a=1;
    factorial(a);
    return 0;
}
void factorial(int x)
{
    static int fac=1;
    if(x<=10)
    {
     fac = fac*x;
     printf("factorial of %d : %d\n",x,fac);
     factorial(x+1);

    }
}
