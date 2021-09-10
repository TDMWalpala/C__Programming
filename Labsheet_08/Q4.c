#include <stdio.h>
#include <stdlib.h>

struct complexNum
{
	int real,img;
}c1,c2;

int add(int r1,int i1, int r2, int i2)
{
	printf("Addition\n");
	int rt = r1 + r2;
	int it = i1 + i2;

	if(it>0)
	{
		printf("%d + %di\n",rt,it);
	}
	else if(it==0)
	{
		printf("%d\n", rt);
	}
	else
	{
		printf("%d %d\ni", rt,it);
	}
}

int sub(int r1,int i1, int r2, int i2)
{
	printf("Subtraction\n");
	int rs = r2 - r1;
	int is = i2 - i1;

	 if(is>0)
	{
		printf("%d + %di\n",rs,is);
	}
	else if(is==0)
	{
		printf("%d\n", rs);
	}
	else
	{
		printf("%d %di\n", rs,is);
	}
}

int mul(int r1,int i1, int r2, int i2)
{
	printf("Multiplication\n");
	int rm = r1*r2;
	int im = i1*i2;

	if(im>0)
	{
		printf("%d + %di\n",rm,im);
	}
	else if(im==0)
	{
		printf("%d\n", rm);
	}
	else
	{
		printf("%d %di\n", rm,im);
	}
}


int main()
{
	int choice;

    while(1)
    {
    	printf("Enter first Complex Numer (Ex: 1+3i -> 1,3) : ");
	    scanf("%d,%d", &c1.real, &c1.img);

	    printf("Enter second Complex Numer (Ex: 3+4i -> 3,4) : ");
	    scanf("%d,%d", &c2.real, &c2.img);
        
	    printf("1.Addtion\n2.Subtraction\n3.Multiplication\nElse. Exit\n\n\tEnter your choice : ");
        scanf("%d", &choice);

    	switch(choice)
        {
          
    	  case 1:
    	  {
    		add(c1.real,c1.img,c2.real,c2.img);break;
    	  }
    	  case 2:
    	  {
    		sub(c1.real,c1.img,c2.real,c2.img);break;
    	  }
    	  case 3:
    	  {
    		mul(c1.real,c1.img,c2.real,c2.img);break;
    	  }
    	  default :
    	  {
    		exit(0);
    	  }
    	}  
    }
}	    	