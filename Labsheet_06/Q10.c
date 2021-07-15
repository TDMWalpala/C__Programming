#include <stdio.h>
#include <stdlib.h>
void counter(char *str)
{
    int vowels=0, consonant=0,i;
    for(i=0; *str!='\0'; *str++)
    {

        if (*str == 'a' || *str == 'e' || *str == 'i' ||
            *str == 'o' || *str == 'u' || *str == 'A' ||
            *str == 'E' || *str == 'I' || *str == 'O' ||
            *str == 'U')
            {
                vowels++;
            }
       else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
            {
                consonant++;
            }
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);

}
int main()
{
    char string[100];
    printf("Enter string :");
    fgets(string, sizeof(string), stdin);
    counter(string);
    return 0;
}
