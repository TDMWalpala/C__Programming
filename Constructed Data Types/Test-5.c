#include <stdio.h>
#include <stdlib.h>


struct date1{
  int dd, mm, yy;
};


struct date2{
  int dd, mm, yy;
};

int main()
{
    struct date1 d1={24,8,2000};
   // struct date1 d3={24,8,2001};
    struct date2 d2={24,8,1999};
    printf("Date1 >> %d, %d, %d\n",d1.dd,d1.mm,d1.yy);
    printf("Date2 >> %d, %d, %d\n",d2.dd,d2.mm,d2.yy);

    if(d1.yy<=d2.yy)
    {
        printf("D2 is the recent.");
    }
    else
    {
        printf("d1 is recent date.");
    }
    return 0;
}
