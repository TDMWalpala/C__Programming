#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void reverse_string(char *str , int size)
{
    int i;
    printf("Reverse of the string is : ");
    *str = *str+(size-1);
    for(i=0; i<size; i++)
    {
        printf("%c",*str-i);

    }
}
int main()
{
    int size;
    char string[100];
    printf("Enter  string :");
    fgets(string, sizeof(string), stdin);
    size = strlen(string);
    reverse_string(string, size-1);
    return 0;
}
