#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ele;
    printf("Enter number of element you should enter : ");
    scanf("%d",&n);
    ele = (int*)calloc(n,sizeof(int));
    printf("\nEnter elements in to array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", ele+i);
    }
    for(i=0; i<n; i++)
    {
        if( *(ele) < *(ele + i))
        {
            *ele = *(ele+i);
        }
    }
    printf("\nLargest number is %d ", *ele);
    return 0;
}
