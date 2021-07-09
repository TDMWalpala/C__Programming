#include <stdio.h>
#include <stdlib.h>
void main(){
float c,f;
printf("Enter temperature in celsius :");
scanf("%f",&c);
f = (c*9)/5 + 32;
printf("\nTemperature in fahrenheit :%0.2f",f);
getch();
}
