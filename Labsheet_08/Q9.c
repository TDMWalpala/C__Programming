#include <stdio.h>
#include <stdlib.h>

struct employee
{
	char Name[20];
	double salary;
	int hours;
};

struct employee *ptr;

void finalsalary()
{
	for(int i = 0; i<10; i++)
	{
		if((ptr+i)->hours<8)
		{
			printf("\nName : %s\tsalary : %0.2f\n", (ptr+i)->Name, (ptr+i)->salary);
		}
		else if(8<=(ptr+i)->hours<10)
		{
            printf("\nName : %s\tsalary : %0.2f\n", (ptr+i)->Name, (ptr+i)->salary+(ptr+i)->hours*500);
		}
		else if(10<=(ptr+i)->hours<12)
		{
            printf("\nName : %s\tsalary : %0.2f\n", (ptr+i)->Name, (ptr+i)->salary+(ptr+i)->hours*1000);
		}
		else
		{
            printf("\nName : %s\tsalary : %0.2f\n", (ptr+i)->Name, (ptr+i)->salary+(ptr+i)->hours*1500);
		}
	}
}

void main()
{
  ptr = (struct employee*)malloc(10*sizeof(struct employee));

  for(int i=0; i<10; i++)
  {
  	printf("Enter employee name :");
  	scanf("%s", (ptr+i)->Name);
  	printf("Enter salary :");
  	scanf("%lf", &(ptr+i)->salary);
  	printf("Enter working hours per day :");
  	scanf("%d", &(ptr+i)->hours);
  }

  finalsalary();
}