#include <stdio.h>
#include <stdlib.h>

int main()
{
char exp[20];
int x,i,count=0,status1=0, status2=0;
    char *e;
    int num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    x = strlen(exp);
    e = exp;
    printf("-----------------VALIDATING REGISTRATION NUMBER : %s ------------------------\n\n",exp);
    printf("Condition 01 : Ther are exactly 8 characters\n");
    if(strlen(exp)==8)
    {
         printf("\t\tThe first condition satisfies\n\n");
          status2++;
    }else if(strlen(exp)<8)
    {
         printf("\t\tThe first condition dose not satisfies : There doesn't have 8 characters.\n\n");
    }else
    {
        printf("\t\tThe first condition dose not satisfy : There does have more than 8 characters.\n\n");
    }
    printf("Condition 02 : First letter should be 'S'\n\n");
    if(exp[0]=='S')
    {
        printf("\t\tThe second condition satisfies\n\n");
         status2++;
    }else
    {
        printf("\t\tThe second condition dose not satisfy\n\n");
    }
    printf("Condition 03 : There should be exactly two '/'s\n\n");
    for(i=0; i<strlen(exp); i++)
    {
        if(exp[i]== '/')
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("\t\tThe third condition satisfies\n\n");
         status2++;
    }else
    {
        printf("\t\tThe third condition dose not satisfy : There dose not have 2 '/' \n\n");
    }
    printf("Condition 04 : The year is represented by two digits in between two '/'s\n\n");
    if(exp[1]=='/' && exp[4]== '/')
    {
        printf("\t\tThe fourth condition satisfies\n\n");
         status2++;
    }else
    {
         printf("\t\tThe fourth condition  dose not satisfy : The year dose not represented by two digits in between two '/'s\n\n");

    }
    printf("Condition 05 : Last three digit immediately after the second slash representation\n\n");
    for(i=0; i<x; i++)
    {
           int a = *e;
           if(i==5 || i==6 || i==7)
           {
               if(a>=48 && a<=57)
               {
                  status1=1;

               }else
               {
                  status1=0;

               }
           }
            e++;
    }
    if(status1 == 1)
    {
         printf("\t\tThe fifth condition satisfies\n\n");
          status2++;
    }else if(status1 == 0)
    {
         printf("\t\tThe fifth condition dose not satisfy : NO integer representation\n\n");
    }
    if(status2==5)
    {
        printf("-------------------------THE REGISTRATION NUMBER IS VALID-------------------------------");
    }else
    {
        printf("-------------------------THE REGISTRATION NUMBER IS  NOT VALID-------------------------------");
    }

    return 0;
}


