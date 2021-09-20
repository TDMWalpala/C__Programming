#include <stdio.h>
#include <stdlib.h>

int main()
{
	//type casting - implicit
	int x =10;
	char y = 'a';
	x = x+y; //107
	float z =x +1.0;
	printf("x = %d\n z= %f",x,z);

	//expplicitly

	double a = 1.2344;
	int sum = (int)a+1;
	printf("\nsum is %d",sum);

}