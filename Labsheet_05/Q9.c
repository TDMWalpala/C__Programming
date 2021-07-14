#include <stdio.h>
#include <stdlib.h>
int count;
int count2s(int num)
{

   if(num<=0)
   {
       return;
   }
   if(num%10==2)
   {
       count++;
   }
   count2s(num/10);

}
int main()
{
    int i,a=0 ,b=0;
    printf("Enter the range of integer (Ex :-(0,10)) :  ");
    scanf("%d,%d", &a,&b);
    for(i=a; i<b; i++)
    {
        count2s(i);
    }
    printf("Count :- %d", count);
    return 0;
}
