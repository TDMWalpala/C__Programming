#include <stdio.h>
#include <stdlib.h>
int scores[5], bscore, i;
void grade(int bscore, int score[5])
{
  for(i=0; i<5; i++)
  {
     if(bscore>= score[i])
     {
       int n =score[i];
       if(n >= bscore-10)
       {
           printf("Grade is A\n");
       }
       else if(n >= bscore-20)
       {
           printf("Grade is B\n");
       }
       else if(n >= bscore-30)
       {
          printf("Grade is C\n");
       }
       else if(n >= bscore-40)
       {
          printf("Grade is D\n");
       }
       else
       {
          printf("Grade is F\n");
       }
     }else
     {
        printf("\nPlease check again scores!");
     }

  }
}
int main()
{
    int score[5];
    printf("Enter value of five student's scores : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &score[i]);
    }

    for(i=0; i<5; i++)
    {
        if(bscore < score[i])
        {
            bscore = score[i];
        }
    }
    grade(bscore,score);

    return 0;
}
