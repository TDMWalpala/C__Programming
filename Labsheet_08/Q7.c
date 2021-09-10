#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int dd, mm, yy;
}d1,d2;

void DDMMYY()
{
	if(d1.dd==d2.dd && d1.mm==d2.mm && d1.yy==d2.yy)
	{
		printf("Dates are equal\n");
	}
	else
	{
		printf("Dates are not equal\n");
	}
}

void main()
{
	printf("Enter first date (DD.MM.YY): ");
	scanf("%d.%d.%d", &d1.dd, &d1.mm, &d1.yy);
	printf("Enter second date (DD.MM.YY): ");
	scanf("%d.%d.%d", &d2.dd, &d2.mm, &d2.yy);

	DDMMYY();
}