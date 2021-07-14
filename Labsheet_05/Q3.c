#include <stdio.h>
#include <stdlib.h>
int i,j;
double total(double array[3][5])
{
    double sum = 0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
         sum = sum + array[i][j];
        }
    }
    return sum;
}
double avg(double x)
{
  double avg = (x/15);
  return avg;
}

double minele(double array[3][5])
{
   double min = array[0][0];
   for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
          if(min>array[i][j])
          {
              min = array[i][j];
          }
        }
    }
return min;
}

double maxele(double array[3][5])
{
   double max = array[0][0];
   for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
          if(max<array[i][j])
          {
              max = array[i][j];
          }
        }
    }
return max;
}

int count(double array[3][5], double max)
{
    int count=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
          if(max == array[i][j])
          {
              count++;
          }
        }
    }
   return count;
}

int main()
{
    double array[3][5] = {
                 {34.5, 56.7, 12.6, 98.4, 54.21},
                 {89.55, 54.2, 98.4, 73.2, 21.45},
                 {34.5, 98.4, 21.45, 98.4, 9.3},
                };

    printf("Total of the element in the array :%.2f\n", total(array));
    printf("Avarage of the element in the array :%.2f\n", avg(total(array)));
    printf("Minimum  element in the array :%.2f\n",minele(array));
    printf("Maximum  element in the array :%.2f\n",maxele(array));
    printf("The frequency of maximum element of a array :%d\n",count(array, maxele(array)));


    return 0;
}
