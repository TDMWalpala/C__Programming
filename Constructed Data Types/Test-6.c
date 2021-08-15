#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
struct student{
  char name[20];
  int age;
  double gpa;
};

void main()
{
    struct student students[SIZE];
    int i,stNo;

    for(i=0;i<SIZE; i++)
    {
        printf("Enter student %d name :", i+1);
        scanf("%[^\n]s", &students[i].name);
        printf("Enter student %d age :", i+1);
        scanf("%d", &students[i].age);
        printf("Enter studen %d GPA :",i+1);
        scanf("%f", &students[i].gpa);
        printf("You entered student %d details.\n\n",i+1);
        getchar();
    }

    printf("Enter the student number you want to see the details :");
    scanf("%d", &stNo);

    printf("student %d name : %s\n", stNo, students[stNo-1].name);
    printf("student %d age : %d\n", stNo, students[stNo-1].age);
    printf("student %d GPA : %s\n", stNo, students[stNo-1].gpa);

    return 0;
}
