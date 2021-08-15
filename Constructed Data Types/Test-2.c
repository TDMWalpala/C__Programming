#include <stdio.h>
#include <stdlib.h>

struct student{
  char name[20];
  char regNO[10];
  int age;
  double gpa;
};

int main()
{
    struct student st1 = {"Tharindu", "20/cs/012",23,3.5};
    printf("student 1 name : %s\n", st1.name);
    printf("student 1 register Num : %s\n", st1.regNO);
    printf("student 1 age : %d\n", st1.age);
    printf("student 1 gpa : %0.1f\n", st1.gpa);
    return 0;
}
