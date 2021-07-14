#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char phrase[] ={"Cut your coat according to the cloth"};
    char word[] ={"cord"};
    if((strchr(phrase,word))==0)
    {
        printf("\n'%s' is unavailable in the phrase.");
    }else
    {
        printf("\n'%s' is available in the phrase.");
    }
    return 0;
}
