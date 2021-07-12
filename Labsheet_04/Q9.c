#include <stdio.h>
#include <stdlib.h>
void powers(int b1, int b2, int x);
int main() {
    int base1, base2 , exp;
    exp=2;
    printf("Enter a base numbers (Ex:-2,9) :");
    scanf("%d,%d", &base1,&base2);
    powers(base1,base2,exp);
    return 0;
}
void powers(int b1, int b2, int x)
{
    int result=1, i;
    printf("sum of ");
    for(i=b1; i<=b2; i++)
    {
       printf("%d^2 + ",i);
       result = result+pow(i, x);
    }
    printf("is %d.",result);


}
