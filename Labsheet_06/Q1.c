#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, *p1, *p2, sum;
    printf("Enter 2 numbers (EX :- 3,4) : ");
    scanf("%d,%d",&x,&y);
    p1 = &x;
    p2 = &y;
    sum = *p1 + *p2;
    printf("\nsum of 2 numbers = %d", sum);
    return 0;
}
