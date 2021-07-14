#include <stdio.h>
#include <stdlib.h>
int i, j, num[10];
int distinct(int num[10])
{
    int  array[1000]={0},flag=0,key;
    for(i=0; i<10; i++)
    {
        key = num[i];
        for(j=0; j<10; j++)
        {

            if(key == num[j])
            {
                flag++;
            }
        }

        if(flag == 1)
        {
            printf("%d ",num[i]);

        }
        else if(flag > 1)
        {
            array[num[i]]++;

            if(array[num[i]] == 1)
           {
               printf("%d ",num[i]);
           }
        }

        flag=0;
    }
}
int main()
{
    printf("Enter ten numbers\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    distinct(num);
    return 0;
}
