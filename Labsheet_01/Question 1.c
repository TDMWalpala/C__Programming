  #include <stdio.h>
  #include <time.h>
void main()
{
    float A = clock();
    char first_name[20]="Tharindu";
    char last_name [20]="Darshana";
    char address [75]="NO:465/1 Pamburana,Matara.";
    int i_number= 5703360;
    int bdy_day= 24;
    int bdy_month=8;
    int bdy_year= 2000;

    printf("Name : %s\t%s\n",first_name,last_name);
    printf("A/L Index Number: %d \n ",i_number);
    printf("Your Home Address: %s\n ",address);
    printf("Date of Birth: %d.%d.%d",bdy_day,bdy_month,bdy_year);

    float B = clock();

     printf("\n%f\n", B-A);
 getch();
}









