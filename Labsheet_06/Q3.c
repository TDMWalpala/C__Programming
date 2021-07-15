#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, *p1, *p2, max;
    printf("Enter 2 numbers (EX :- 3,4) : ");
    scanf("%d,%d",&x,&y);
    p1 = &x;
    p2 = &y;
    if(*p1>*p2)
    {
        max = *p1;
    }else
    {
        max = *p2;
    }
    printf("\nMax number is = %d", max);
    return 0;
}
