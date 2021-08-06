#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q;

    for(int i=0; i<=5; i++)
    {
        if(i%2==0)
        {
             p=1,q=0;
        }
        else
        {
            p=0,q=1;
        }
        for(int j=0; j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%d",p);
            }
            else
            {
                printf("%d",q);
            }
        }
        printf("\n");
    }
    return 0;
}
