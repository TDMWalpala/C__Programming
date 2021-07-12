#include <stdio.h>
#include <stdlib.h>
void addition();
int main()
{
    printf("Enter two number :(EX:- 2,3) ");
    addition();
    return 0;
}
void addition(){
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("\ntwo numbers are %d and %d.",a,b);
    return 0;
}
