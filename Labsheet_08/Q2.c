#include <stdio.h>
#include <stdlib.h>

struct Distance
{
	int feet;
	float inch;
}d1,d2,dt;

void main()
{
	printf("Enter First Distance\n");
	printf("Enter Feet :");
	scanf("%d", &d1.feet);
	printf("Enter Inch :");
	scanf("%f", &d1.inch);

	printf("Enter Second Distance\n");
	printf("Enter Feet :");
	scanf("%d", &d2.feet);
	printf("Enter Inch :");
	scanf("%f", &d2.inch);

	dt.feet = d1.feet + d2.feet;
	dt.inch = d1.inch + d2.inch;

	while(dt.inch>=12.00)
	{
		dt.inch = dt.inch-12.00;
		dt.feet++;
	}		

	printf("\nSum of distance : %d\'%0.1f\"", dt.feet, dt.inch);

	return 0;
}