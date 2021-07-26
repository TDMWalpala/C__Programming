#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COIN 10
#define MAX 50
int flag;
int static x;
int coins[COIN] = {1,2,5,10,20,50,100,500,1000,5000};
void findcoin(int cash, int flag)
{
    int i, j=0;
    int coinlist[MAX];
    for(i = COIN-1 ; i>=0; i--)
    {
        while(cash >= coins[i])
        {
            cash -=coins[i];
            coinlist[j++] = coins[i];
        }
    }
    for(i=0; i<j; i++)
    {
        coinanalysis(coinlist[i],j,flag);
    }

}

void coinanalysis(int coin,int t,int flag)
{
    static int i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
    static int count=0;
    switch(coin)
    {
    case 5000:
        {
            i++;break;
        }
    case 1000:
        {
            j++;break;
        }
    case 500:
        {
            k++;break;
        }
    case 100:
        {
            l++;break;
        }
    case 50:
        {
            m++;break;
        }
    case 20:
        {
            n++;break;
        }
    case 10:
        {
            o++;break;
        }
    case 5:
        {
            p++;break;
        }
    case 2:
        {
            q++;break;
        }
    case 1:
        {
            r++;break;
        }
    default:
        {

        }
    }
     count++;
    if(count == t)
    {
      if(isprint())
      {
        display(5000,i);
        display(1000,j);
        display(500,k);
        display(100,l);
        display(50,m);
        display(20,n);
        display(10,o);
        display(5,p);
        display(2,q);
        display(1,r);

      }

        if(flag==1)
        {
           count = 0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0;
        }
        count = 0;
    }

}

int isprint()
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return 0;

    }



}


void display(int coins, int numofcoin)
{
    int i = numofcoin;
    if(i!=0)
    {
     switch(coins)
      {
        case 5000:
        {
           printf("Rs 5000: %d\n",i);break;
        }
        case 1000:
        {
           printf("Rs 1000: %d\n",i);break;
        }
        case 500:
        {
           printf("Rs 500: %d\n",i);break;
        }
        case 100:
        {
           printf("Rs 100: %d\n",i);break;
        }
        case 50:
        {
           printf("Rs 50: %d\n",i);break;
        }
        case 20:
        {
           printf("Rs 20: %d\n",i);break;
        }
        case 10:
        {
           printf("Rs 10: %d\n",i);break;
        }
        case 5:
        {
           printf("Rs 5: %d\n",i);break;
        }
        case 2:
        {
           printf("Rs 2: %d\n",i);break;
        }
        case 1:
        {
           printf("Rs 1: %d\n",i);break;
        }
        default :
        {

        }

       }

    }

}
int main()
{
     int emp,i=0,salary,salaryarr[20],totalsalary=0;
     printf("\nEnter number of the employee :");
     scanf("%d",&emp);
     for(i=0;i<emp;i++)
     {
         x=1;
         char name[20];
         flag=1;
         printf("\nEnter employee name :");
         scanf("%s",&name);
         printf("Enter salary of the employee :");
         scanf("%d",&salary);
         totalsalary=totalsalary + salary;
         salaryarr[i]=salary;
         printf("\n%s\n\n",name);
         printf("Salary :RS %d\n",salary);
         findcoin(salary,flag);
     }

     printf("\nDarshana Tech Life Organization(techlifeOrg@gmail.com)\n");
     printf("Total salary : %d\n",totalsalary);
     for(i=0;i<emp;i++)
     {
         x=0;
         flag=0;
         if(i==(emp-1))
         {
             x=1;
         }

       findcoin(salaryarr[i],flag);
     }


    return 0;
}
