#include <stdio.h>
#include <stdlib.h>
void main(){
    int x;
    printf("Enter an number :");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is a even number.",x);
    }else{
        printf("%d is a odd number.",x);
    }
  getch();
}
