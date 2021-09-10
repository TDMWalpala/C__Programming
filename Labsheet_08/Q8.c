#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int dd, mm, yy;
}d1;


void DDMMYY()
{
	int days = 15;
	int month = 1;
	int x;

	if(d1.dd+days<=30 && d1.mm<12)
	{
		d1.dd+= days;
		d1.mm+= month;
	}
	else if(d1.dd+days>30 && d1.mm<11)
	{
		d1.mm+=2;
		while(d1.dd<30)
		{
			d1.dd++;
			x++;
		}

		d1.dd = days-x;
	}
	else if(d1.dd+days<=30 && d1.mm==12)
	{
		d1.mm=1;
		d1.dd+=days;
		d1.yy++;
	}
	else if(d1.dd+days>30 && d1.mm>=11)
	{
		if(d1.mm==12)
		{
			d1.mm=2;
		}
		else if(d1.mm=11)
		{
			d1.mm=1;
		}

		while(d1.dd<30)
		{
			d1.dd++;
			x++;
		}

		d1.dd = days-x;
		d1.yy++;
	}
}

void main()
{
	printf("Enter current date (DD.MM.YY): ");
	scanf("%d.%d.%d", &d1.dd, &d1.mm, &d1.yy);

	DDMMYY();

	printf("\nFinal date : %d.%d.%d", d1.dd,d1.mm,d1.yy);
}