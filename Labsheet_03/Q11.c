#include <stdio.h>
#include <stdlib.h>
void main(){
    float height,weight,bmi;
    printf("Enter your height(m) : ");
    scanf("%f",&height);
    printf("Enter your weight(Kg) : ");
    scanf("%f",&weight);
    bmi = (weight/(height*height));
    if(bmi<18.5){
        printf("Underweight");
    }else if(bmi>=18.5&&bmi<25.0){
        printf("Normal weight");
    }else if(bmi>=25.0&&bmi<30.0){
        printf("Overweight");
    }else if(bmi>=30.0){
        printf("Obesity");
    }else{
        printf("Error");

    }
getch();
}
