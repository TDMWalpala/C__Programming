#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool swap;
    int n,temp,j;
    printf("Enter array size\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements :\n");
    for(j=0; j<n; j++)
    {
        scanf("%d", &arr[j]);
    }
    do{
            swap = false;
            for(j=0;j<n;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swap = true;
                }
            }


    }while(swap);
    printf("\After sorted  array :");
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
}

