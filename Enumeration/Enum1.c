#include <stdio.h>
#include <stdlib.h>

//enumerations - user defiend data types

enum year{January, February, March, April, May, June, July, August, September,October, November, December};
enum week{Mon=10, Tue, Wed, Thur, Fri=10, sat=16, Sun};

int main()
{
	for(int i= January; i<December; i++)
	{
		printf("%d\n",i);
	}
    printf("\n---------------------\n");
	printf("%d\n",Mon);
	printf("%d\n",Tue);
	printf("%d\n",Wed);
	printf("%d\n",Fri);
	printf("%d\n",sat);
	printf("%d\n",Sun);

	getch();
}