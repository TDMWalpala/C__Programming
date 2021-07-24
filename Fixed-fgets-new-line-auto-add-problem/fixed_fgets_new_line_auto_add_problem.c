#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fixfget(char c_array[]);
struct student{
    char name[50];
    int age;
    float weight;
};
main(){
struct student s;
printf("Enter Name :");
fgets(s.name,sizeof(s.name),stdin);
printf("Enter Age :");
scanf("%d",&s.age);
printf("Enter Weight :");
scanf("%f",&s.weight);
printf("\n--------------------------\n");
fixfget(s.name);
printf("Name : %s \nAge : %d \nWiegth : %0.2f",s.name,s.age,s.weight);

getch();
}
void fixfget(char c_array[]){
char *pos = strchr(c_array,'\n');
if(pos!=NULL){
    *pos ='\0';
 }
}
