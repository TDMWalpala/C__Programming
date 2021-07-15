#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char alphabets[27];
    char *ptr;
    ptr = alphabets;
    for(i=0; i<26; i++)
    {
        *ptr = 65 +i; // ASCCI CODE A- 65
        ptr++;
    }
    ptr = alphabets;
     for(i=0; i<26; i++)
    {
        printf("%c ",*ptr);
        ptr++;
    }

    return 0;
}
