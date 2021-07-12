#include <stdio.h>
#include <stdlib.h>
int count(int x);
int main()
{
    int n;
    printf("Enter count :");
    scanf("%d", &n);
    count(n);
    return 0;
}
int count(int x)
{
    int static i=0;
    if(i<9){
    i++;
    printf("%d ",x+1);
    count(x+1);
    }
    return 0;
}
