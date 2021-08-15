#include <stdio.h>
#include <stdlib.h>

struct date{
  int dd, mm, yy;
};

int main()
{
    struct date d1 ={24,8,2000};
    struct date d2;

    d2=d1;
    printf("d2 day : %d\n",d2.dd);
    printf("d2 month : %d\n",d2.mm);
    printf("d2 year : %d\n",d2.yy);

  return 0;
}
