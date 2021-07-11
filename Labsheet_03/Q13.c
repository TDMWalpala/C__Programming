/*#include <stdio.h>
#include <stdlib.h>
int main()
{
unsigned int i,j,k;
int ran_num1,ran_num2=0,ran_num3=0,array[100],a,x;
char n;
ran_num1 =rand()%100;
printf("%d",ran_num1);
printf("\n1. too high\n2. too low\n3. that's the number\n");
for(i=0;i<=100;i++){
scanf("%c",&n);
switch(n){
  case '1':
       for(j=0;j<100;j++){
            ran_num2 = rand()%100;
            if(ran_num2>ran_num1){
                printf("%d\n",ran_num2);
                ran_num1=ran_num2;
                x = ran_num2;
                break;
            }
            array[j] = x;
       }

       break;
  case '2':
      for(k=0;k<100;k++){
            ran_num2=rand()%array[j-1];
            if(ran_num2<array[j-1]){
                printf("%d\n",ran_num2);
               ran_num2 = array[j-1];
                break
                }
       }
      break;
  case '3':
     printf("");
    break;

}
}*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void guess(int N)
{
    int number,guess,numofguess=0;
    number=rand()%100;
    printf("Guess a number between 1 and 100\n");
    do {
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("too low\n");
            numofguess++;
        }else if (number>guess)
        {
            printf("too high\n");
            numofguess++;
        }else
            printf("You guessed the number in %d guesses.\n",numofguess);
    } while(guess!=number);
}


int main()
{
    int N=100;
    guess(N);
return 0;
}









