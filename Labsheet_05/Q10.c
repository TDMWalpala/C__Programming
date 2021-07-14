#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char strn[20], ING[]="ing", LY[]="ly";
    printf("Input a string : ");
    scanf("%s", &strn);
    if(strlen(strn)>=3)
    {
          if(strchr(strn, 'ing')<1)
          {
              strcat(strn, ING);
              printf("%s",strn);
          }
          else
          {
              strcat(strn, LY);
              printf("%s",strn);
          }
    }

    return 0;
}
