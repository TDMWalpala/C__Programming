#include <stdio.h>
#include <stdlib.h>
void main(){
    int num,i,div;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nAll divisors of a %d.",num);
    for(i=1;i<=num;i++){
        div = (num)%i;
        if(div==0){
            printf("\n%d",i);
        }
    }
getch();
}
