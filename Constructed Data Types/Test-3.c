#include <stdio.h>
#include <stdlib.h>

struct data_type{
  int dd, mm, yy;
};

struct student{
  char *name;
  char *regNo;
  struct data_type birthday;
  double gpa;
};
int main()
{
    struct student st1={" Tharindu darshana", "20/cs/012", {24,8,2000},3.9};

    struct student st2;
    st2.name="TDM Walpala";
    st2.regNo="20/cs/128";
    st2.gpa = 3.8;

    st2.birthday.dd = 25;
    st2.birthday.mm = 8;
    st2.birthday.yy = 2000;

    printf("student 1 name : %s\n", st1.name);
    printf("student 1 register Num : %s\n", st1.regNo);
    printf("student 1 gpa : %0.1f\n", st1.gpa);

    printf("student 2 name : %s\n", st2.name);
    printf("student 2 register Num : %s\n", st2.regNo);
    printf("student 2 gpa : %0.1f\n", st2.gpa);
    return 0;
}
