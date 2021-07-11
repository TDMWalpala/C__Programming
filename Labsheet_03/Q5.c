#include <stdio.h>
#include <stdlib.h>
void main(){
float X1,Y1,X2,Y2,slope;
printf("Enter first point.(ex:- X1,Y1)\n");
scanf("%f,%f",&X1,&Y1);
printf("Enter first point.(ex:- X2,Y2)\n");
scanf("%f,%f",&X2,&Y2);
slope = (Y2-Y1)/(X2-X1);
printf("\nSlope of a line : %0.2f",slope);
getch();
}
