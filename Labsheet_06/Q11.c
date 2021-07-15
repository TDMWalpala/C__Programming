#include <stdio.h>
#include <stdlib.h>
void sort(int *A, int n)
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
           if(A[j]>A[j+1])
           {
               temp = A[j];
               A[j] = A[j+1];
               A[j+1] = temp;
           }
        }
    }
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter Numbers one by one \n:");
    for(int i=0; i<n; i++)
    {
       scanf("%d", &A[i]);
    }
    sort(A,n);
    for(int i=0; i<n; i++)
    {
       printf("%d ",A[i]);
    }
    return 0;
}
