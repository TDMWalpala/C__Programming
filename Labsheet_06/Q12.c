#include <stdio.h>
#include <stdlib.h>
int n, i;
void sum(int *A , int n)
{
    int sum=0;
    for(i=0; i<n; i++)
    {
      sum +=*A ;
      A++;
    }
    printf("sum of all elements in an array %d",sum);
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter Numbers one by one :\n");
    for(i=0; i<n; i++)
    {
       scanf("%d", &A[i]);
    }
    sum(A,n);
    return 0;
}
