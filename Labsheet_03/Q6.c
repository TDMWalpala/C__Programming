#include <stdio.h>
#include <stdlib.h>
void main(){
 float unit_price,revenue,discount;
 int quantity;
 printf("Enter unit price :Rs.");
 scanf("%f",&unit_price);
 printf("\nEnter quantity of a product:");
 scanf("%d",&quantity);
 if(quantity < 120){
   revenue = quantity*unit_price;
    printf("Rvenue = Rs. %0.2f",revenue);
 }else if(quantity >= 120 && quantity <=160){
     revenue = quantity*(unit_price)*(1-0.15);
     printf("Rvenue = Rs. %0.2f",revenue);
 }else if(quantity > 160){
     revenue = quantity*(unit_price)*(1-0.2);
      printf("Rvenue = Rs. %0.2f",revenue);
 }else{

 }
getch();
}
