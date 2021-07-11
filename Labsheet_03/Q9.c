#include <stdio.h>
#include <stdlib.h>
void main(){
    char array[]="00110001001110";
    int i,y,size,count=0,max_count=0;
    size = sizeof(array)/sizeof(array[0]);
    y=size-1;
    for(i=0;i<=y;i++){
        if('1'==array[i]){
            count++;
            if(count>=max_count){
                max_count = count;
            }
        }else{
            count=0;
        }
    }
    printf("Max number of consecutive 1's = %d",max_count);
 getch();
}
