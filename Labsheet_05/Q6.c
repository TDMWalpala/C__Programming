#include <stdio.h>
#include <stdlib.h>
int main()
{
   int startscan, minIndex, minValue, index, size, i;
   printf("Enter the  size of array :");
   scanf("%d", &size);
   int array[size];
   printf("Enter the elements :\n");
   for(i=0; i<size; i++)
   {
      scanf("%d", &array[i]);
   }
   for(startscan =0; startscan<size -1; startscan++)
   {
       minIndex = startscan;
       minValue = array[startscan];
       for(index = startscan+1; index<size; index++)
       {
           if(array[index]<minValue)
           {
               minValue = array[index];
               minIndex = index;
           }

       }
       array[minIndex] = array[startscan];
       array[startscan] = minValue;
   }
   printf("\After sorted  array :");
   for(i=0; i<size; i++)
   {
       printf("%d ", array[i]);
   }
  return 0;
}
