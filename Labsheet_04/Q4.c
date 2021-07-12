#include <stdio.h>
#include <stdlib.h>
void current_score(float x, int y);
int  higher_run_ratescore(float x, int y);
int main()
{
    float currentRR;
    int overs;
    printf("Enter current run rate : ");
    scanf("%f", &currentRR);
    printf("Enter number of overs played : ");
    scanf("%d", &overs);
    current_score(currentRR,overs);
    higher_run_ratescore(currentRR,overs);
    return 0;
}

void current_score(float x, int y)
{
    int score = x*(y);
    int final_score = x*(20);
    printf("\ncurrent score : %d \npredicted score for current run rate is %d.\n",score,final_score);
}
int  higher_run_ratescore(float x, int y)
{
    int i=0,score,p_score;
    score = x*(y);
    int RR = x+1;
    for(i=RR; i<=36; i++)
   {
        p_score =((i*(20-y))+score);
        printf("predicted score for run rate of %d is %d.\n",i,p_score);
   }
   return 0;
}
