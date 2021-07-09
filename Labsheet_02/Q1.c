#include <stdio.h>
#include <stdlib.h>
void main(){
    float a=1,b=2,c=3,d=4;
    printf("value of (a+b)/(c+d) = %0.2f\n\n",(a+b)/(c+d));   //  value of (a+b)/(c+d) :0.43
    printf("Value of a+b/(c+d) = %0.2f\n\n",a+b/(c+d));      // Value of a+b/(c+d)    :1.29
    printf("Value of (a+b)/c+d = %0.2f\n\n",(a+b)/c+d);     // Value of (a+b)/c+d    :5.00
    printf("Value of a*b/c*d = %0.2f\n\n",a*b/c*d);        // Value of a*b/c*d      :2.67
  getch();
}
