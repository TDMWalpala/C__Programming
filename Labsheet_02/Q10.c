#include <stdio.h>
#include <stdlib.h>
void main(){
    int days,years,a_o_minutes;
    printf("Enter number of years and days(EX:- 5,12) :");
    scanf("%d,%d",&years,&days);
    a_o_minutes = 1440*(days + (years)*365);
    printf("Amount of the minutes : %d min",a_o_minutes);
    getch();
}
