#include <stdio.h>
#include <stdlib.h>
int lengthofstr(char *c)
{
    int length=0;
    while(*c != '\0')
    {
        length++;
        c++;
    }
    return length-1 ;
}
int main()
{
    char array[50];
    printf("Enter string : ");
    fgets(array, sizeof(array),stdin);
    printf("Length of the given string = %d ",lengthofstr(array));
}
