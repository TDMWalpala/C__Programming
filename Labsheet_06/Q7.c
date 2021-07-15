#include <stdio.h>
#include <stdlib.h>
void swap(int *n, int *m)
{
    int temp;
    printf("\n\nBefore swapping : num1 - %d , num2 - %d ",*n,*m);
    temp = *n;
    *n = *m;
    *m = temp;
    printf("\n\nAfter swapping : num1 - %d , num2 - %d ",*n,*m);
}
int main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    swap(&num1, &num2);
    return 0;
}
