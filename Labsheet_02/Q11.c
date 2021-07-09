#include <stdio.h>
#include <stdlib.h>
 void main(){
 float height_cm;
 int height,height_inch,height_feet;
 printf("Enter your height feet and inches(Ex:- 5,10) :");
 scanf("%d,%d",&height_feet,&height_inch);
 height_cm = ((height_inch) + (height_feet)*12)*2.54;
 printf("\nYour height is %0.2f centimeters.",height_cm);
getch();
 }
