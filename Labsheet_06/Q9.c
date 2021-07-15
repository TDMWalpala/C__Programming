#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void swapPosition(char *c1, char *c2)
{
    char temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}
void Permutation(char *cht, int stno, int endno)
{
   int i;
   if (stno == endno)
     printf("\t\t\t\t\t%s\n", cht);
   else
   {
       for (i = stno; i <= endno; i++)
       {
          swapPosition((cht+stno), (cht+i));
          Permutation(cht, stno+1, endno);
          swapPosition((cht+stno), (cht+i));
       }
   }
}

int main()
{
    int n;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    char str[n];
    printf("Enter String Generate For Permutations: ");
    scanf("%s",str);
    printf("The Permutations Of The String Are : \n");
    Permutation(str, 0, n-1);
    return 0;
}
