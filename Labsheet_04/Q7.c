#include <stdio.h>
#include <stdlib.h>
void BOD(int DM, int year);
int main()
{
 int year, DandM, ect;
 printf("Enter ID number following methord >>\n\t1. Input first 2 number(If you have new ID card then input first 4 number) + Enter\n\t2. Inpun Next 3 number + Enter\n\t3. Input last number 4 + Enter\n");
 scanf("%d%d%d", &year, &DandM, &ect);
 if(year>=2000)
 {
     printf("\nYour ID Number is :%d%d%d\n", year,DandM,ect);
 }else
 {
     printf("\nYour ID Number is :%d%d%dv\n", year,DandM,ect);
 }

 DOB(DandM,year);
 return 0;
}
void DOB(int DM, int year)
{

    int month,day;
    if(DM>=1 && DM<=31)
    {
        month = 1;
        day = (DM);

    }else if(DM>=32 && DM<=60)
    {
        month = 2;
        day = -(31 - DM);

    }else if(DM>=61 && DM<=91)
    {
        month = 3;
        day = (60 - DM);

    }else if(DM>=92 && DM<=121)
    {
        month = 4;
        day = (91 - DM);

    }else if(DM>=122 && DM<=152)
    {
        month = 5;
        day = -(121 - DM);

    }else if(DM>=153 && DM<=182)
    {
        month = 6;
        day = (152 - DM);

    }else if(DM>=183 && DM<=213)
    {
        month = 7;
        day = -(182 - DM);

    }else if(DM>=214 && DM<=244)
    {
        month = 8;
        day = -(213 - DM);

    }else if(DM>=245 && DM<=274)
    {
        month = 9;
        day = -(244 - DM);

    }else if(DM>=275 && DM<=305)
    {
        month = 10;
        day = -(274 - DM);

    }else if(DM>=306 && DM<=335)
    {
        month = 11;
        day = -(305 - DM);

    }else if(DM<=336 && DM <366 )
    {
        month = 12;
        day = -(366 - DM);
    }else if(DM>=531 && DM<=866)
    {
      DOB(DM-500,year);
    }else
    {
        printf("/nERRO!!!Plese check your ID number!");
    }
    if(year<=99)
    {
        printf("\nYour birthday is 19%d/ %d/ %d",year, month, day);

    }else if(year<=2000 && year>99)
    {
        printf("\nYour birthday is %d/ %d/ %d",year, month, day);

    }

}
