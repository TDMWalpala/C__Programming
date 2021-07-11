#include <stdio.h>
#include <stdlib.h>
void main(){
int PrintNumberInWord;
printf("Enter a number between 1 and 9 :");
scanf("%d",&PrintNumberInWord);
if(PrintNumberInWord==1){
    printf("ONE");
}else if(PrintNumberInWord==2){
    printf("TWO");
}else if(PrintNumberInWord==3){
    printf("THREE");
}else if(PrintNumberInWord==4){
    printf("FOUR");
}else if(PrintNumberInWord==5){
    printf("FIVE");
}else if(PrintNumberInWord==6){
    printf("SIX");
}else if(PrintNumberInWord==7){
    printf("SEVEN");
}else if(PrintNumberInWord==8){
    printf("EIGTH");
}else if(PrintNumberInWord==9){
    printf("NINE");
}else{
    printf("OTHER");
}
getch();
}
