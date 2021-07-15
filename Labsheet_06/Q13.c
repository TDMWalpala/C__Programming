#include <stdio.h>
#include <stdlib.h>
void reverse(int *num , int n)
{
    int i;
    *num = *num+(n-1);
    printf("\nThe elements of array in reverse order are :");
    for(i=0; i<n; i++)
    {
        printf("%d ",*num - i);
    }

}
int main()
{
  int n, i;
  int *ptr;
  printf("Enter Number Of elements to store in the array :\n ");
  scanf("%d", &n);
  int array[n];
  ptr = &array[0];
  printf("\nEnter elements in the array :\n");
  for(i=0; i<n; i++)
  {
      scanf("%d", ptr);
      ptr++;
  }
  reverse(array, n);
}
