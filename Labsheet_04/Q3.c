#include <stdio.h>
#include <stdlib.h>
int surface(int x);
int volume(int y);
int main()
{
    int s_area,vol;
    int length;
    printf("Enter length of sied:");
    scanf("%d",&length);
    s_area = surface(length);
    vol = volume(length);
    printf("surface area is square unit %d.\nvolume is cubic unit %d.",s_area,vol);
    return 0;
}
int surface(int x)
{
    return (x*x*6);
}
int volume(int y)
{
    return(y*y*y);
}
