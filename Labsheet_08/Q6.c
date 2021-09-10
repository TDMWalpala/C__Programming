#include <stdio.h>
#include <stdlib.h>

struct customer
{
	char Name[20];
	int AccNum;
	double Balance;
};
struct customer *ptr;
int Numofcus;

void display1()
{
	printf("\n");
	for(int i=0; i<Numofcus; i++)
	{
		if((ptr+i)->Balance<200)
		{
			printf("\t%s\n", (ptr+i)->Name);
		}
	}
}

void display2()
{
	for(int i=0; i<Numofcus; i++)
	{
		if((ptr+i)->Balance>1000)
		{
			(ptr+i)->Balance += 100;

			printf("\nCustomer name : %s\nBalance : %0.2f", (ptr+i)->Name, (ptr+i)->Balance); 
		}
	}
}

void main()
{
	
   
    printf("Enter number of customer :");
    scanf("%d", &Numofcus);

    ptr = (struct customer*)malloc(Numofcus*(sizeof(struct customer)));

    for(int i=0; i<Numofcus; i++)
    {
    	printf("Enter customer name :");
    	scanf("%s", (ptr+i)->Name);
    	printf("Enter account number :");
    	scanf("%d", &(ptr+i)->AccNum);
    	printf("Enter balance :");
    	scanf("%lf", &(ptr+i)->Balance);
    }
    
    display1();
    display2();
}