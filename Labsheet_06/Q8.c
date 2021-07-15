#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *p,facto=1;
    printf("Enter positive number find the factorial :");
    scanf("%d",&n);
    p = &facto;
    for(i=1; i<=n; i++)
    {
        *p = (*p)*i;
    }
    printf("Factorial of %d is %d.",n ,facto);
    return 0;
}
