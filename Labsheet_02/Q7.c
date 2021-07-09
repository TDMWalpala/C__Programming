#include <stdio.h>
#include <stdlib.h>
void main(){
    int o_r=7,i_r=5;
    double s_area;
    s_area = 3.14*(o_r-i_r)*(o_r-i_r);
    printf("Surface area of disk square units = %0.2lf",s_area);
    getch();
}
