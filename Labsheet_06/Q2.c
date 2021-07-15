#include <stdio.h>
#include <stdlib.h>
int add(int*p1, int*p2)
{
    int sum;
    sum = *p1 + *p2;
    return sum;
}

int main()
{
    int x, y;
    printf("Enter 2 numbers (EX :- 3,4) : ");
    scanf("%d,%d",&x,&y);
    printf("\nsum of 2 numbers = %d", add(&x,&y));
    return 0;
}
