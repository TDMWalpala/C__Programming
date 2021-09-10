#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct student{

	char name[20];
	char address[50];
	int IDnum;
	int age;
};

bool a = true; 

void display1(struct student *ptr)
{
	if(ptr->age==14)
	{
		printf("\t%s\n", ptr->name);
	}	
}

void display2(struct student *ptr)
{
	if(a)
	{
		printf("14 years old student name list, \n");
		a = false;
	}
	if((ptr->IDnum/2)==0)
	{
		printf("Having even ID number student name list, \n");
		printf("\t%s\n", ptr->name);
		
	}	
}

void display3(struct student *ptr)
{
	printf("Name : %s\nID Number : %d\nAge : %d\nAddress : %s\n", ptr->name,ptr->IDnum,ptr->age,ptr->address);
}

void main()
{
	struct student *ptr;
	int num,x;

	printf("Enter number of person you want to add :");
	scanf("%d", &num);

	ptr = (struct student*)malloc(num* sizeof(struct student));

	for(int i=0; i<num; i++)
	{
		printf("Enter student %d information\n", i+1);
		printf("Enter Name :");
		scanf("%s", (ptr+i)->name);
		printf("Enter Age : ");
		scanf("%d", &(ptr+i)->age);
		/*if(!(11<=(ptr+i)->age>=13))
		{
           return;
		}*/
		printf("Enter ID number : ");
		scanf("%d", &(ptr+i)->IDnum);
		printf("Enter Address : ");
		scanf("%s", (ptr+i)->address);
	}

	for(int i=0; i<num; i++)
	{
		display1((ptr+i));
		display2((ptr+i));
	}
    printf("Enter student ID number : ");
    scanf("%d", &x);
    for(int i=0; i<num; i++)
	{
		if(x==(ptr+i)->IDnum)
		{
           display3((ptr+i));
		}
	}
}