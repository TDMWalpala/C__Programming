#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Data{
	int i;
	float f;
	char str[20];
};

int main()
{
	union Data d;
	printf("Memory size occupied by : %ld\n", sizeof(d));

	//use members
	d.i = 10;
	d.f = 22.5;
	strcpy(d.str, "Hello World");//<<<<<<<<<<<<<<

	printf("d.i   : %d\n", d.i); //1819043144
	printf("d.f   : %f\n", d.f); //1143139122437582505939828736.000000
	printf("d.str : %s\n\n", d.str); //Hello World

	d.i = 15;
	strcpy(d.str, "Hello Sri Lanka");
	d.f = 226.5;//<<<<<<<<<<<<<<<<<<<<


	printf("d.i   : %d\n", d.i); //1130528768
	printf("d.f   : %f\n", d.f); //226.500000
	printf("d.str : %s\n", d.str); //

	//print memory address
	printf("d.i   : %x\n", &(d.i)); // 61ff0c
	printf("d.f   : %x\n", &(d.f)); // 61ff0c
	printf("d.str : %x\n", &(d.str)); //61ff0c
	printf("d     : %x\n", &(d)); //61ff0c


   getch();

}
