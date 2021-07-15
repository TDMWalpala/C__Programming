#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n];
    printf("\nEnter elements in the array : \n");
    for(i=0; i<n; i++)
    {
       scanf("%d", array+i);
    }
    printf("\nThe elements you entered are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", *(array+i));
    }
    return 0;
}
