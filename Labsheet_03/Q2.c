#include <stdio.h>
#include <stdlib.h>
void main(){
    int page_no;
    printf("Enter page number :\n");
    scanf("%d",&page_no);
    if((page_no)%2 == 0){
        printf("page of a book is in left side.");
    }else if((page_no)%2 != 0){
        printf("page of a book is in right side.");
    }else{
        printf("please enter page number.");
    }
getch();
}
