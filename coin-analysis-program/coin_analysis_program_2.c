#include <stdio.h>
#include <stdlib.h>

int array[10][2] = {{5000,0},{1000,0},{500,0},{100,0},{50,0},{20,0},{10,0},{5,0},{2,0},{1,0},};
int denomination[10][2] = {{5000,0},{1000,0},{500,0},{100,0},{50,0},{20,0},{10,0},{5,0},{2,0},{1,0},};

void coinage_analysis(int salary)
{
    int topay, index=0, cash, i;
    topay = salary;

    while(topay > 0) // Coins analysis
    {
       cash = topay / denomination[index][0];
       denomination[index][1] = cash;
       topay = topay - (cash * (denomination[index][0]));
       index = index+1;
    }
    for(i=0; i<10; i++)
    {
        if(denomination[i][1]!=0)
            {
                 printf("Rs %d : %d\n",denomination[i][0],denomination[i][1]); // Print rations of coins
                 array[i][1]+= denomination[i][1]; // Count and store number of coins
            }
    }
}

int main()
{
    int numofemp, i, salary, totalsalary=0;
    char name[15];

    printf("Enter number of employees :\n");
    scanf("%d", &numofemp); // Get number of employees

    while(numofemp > 0)
    {
        printf("\nEnter employee name : ");
        scanf("%s", &name); // Get employee name
        printf("\nEnter salary : ");
        scanf("%d", &salary); // Get salary
        totalsalary += salary; // count salaries
        printf("\n");
        printf("%s\nSalary :Rs %d\n", name, salary);

        printf("Coin analysis : \n");
        coinage_analysis(salary); // calling coins analysis function(coinage_analysis)

        numofemp--;// decreasing number of employee by 1
    }

    printf("\nDarshana Tech Life Organization(tharindudarshana@gmail.com)\n\n");
    printf("Total salary :Rs %d\n",totalsalary);

     for(i=0; i<10; i++)
    {
        if(array[i][1]!= 0)
            {
                 printf("Total %ds : %d\n", denomination[i][0], array[i][1]); // Print rations of the total salaries
            }
    }

    getch();
}
