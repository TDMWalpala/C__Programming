#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randomNum();
int RPSgame(int you, int computer);
int main()
{
	int n, you, computer;
	int result;
	n = randomNum();
	if (n < 7)
    {
		computer = 1;

	}
	else if (n >7 && n < 19)
    {
		computer = 2;
	}
	else
    {
		computer = 3;
    }

	printf("\n----------<<<<CHOICE>>>>----------\n\t1. STONE\n\t2. PAPER\n\t3. SCISSOR\n");
	scanf("%d", &you);
	result = RPSgame(you, computer);

	if (result == 4)
    {
		printf("Game Draw!\n");
	}
	else if (result == 1)
    {
		printf("You have won the game!\n");
	}
	else
	{
		printf("You have lost the game!\n");
	}
		printf("YOu choose : %d and Computer choose : %d\n",you, computer);

	return 0;
}

int randomNum()
{
    int n,lower=1,upper=20;
    srand(time(NULL));
	n = rand()%(upper-lower)+lower;
	return n;
}

int RPSgame(int you, int computer)
{

	if(you==computer)
    {
		return 4;
    }

	if(you==1&&computer==2)
    {
		return 0;
    }

    else if(you==2&&computer==1)
    {
        return 1;
    }
	if(you==1&&computer==3)
    {
		return 1;
    }

	else if(you== 3&&computer==1)
    {
		return 0;
    }
	if(you ==2&&computer==3)
    {
		return 0;
    }
}
