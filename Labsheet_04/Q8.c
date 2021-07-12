#include <stdio.h>
#include <stdlib.h>
int cal_gcd(int a, int b);
int main()
{
    int a, b;
    printf("Enter two for calculate greatest common divisor (GCD) (EX:- 60,36) : ");
    scanf("%d,%d", &a, &b);
    printf("\nGCD of %d and %d is %d ", a, b, cal_gcd(a, b));
    return 0;
}
int cal_gcd(int a, int b)
{
    if (a == 0)
    {
       return b;
    }
    else if (b == 0)
    {
       return a;
    }
    else if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return cal_gcd(a-b, b);
    }
    else
    {
    return cal_gcd(a, b-a);
    }
}
