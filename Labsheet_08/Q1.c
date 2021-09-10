#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int IDNum;
    int age;
    char name[20];
    char address[50];

}students;

int main()
{
    students student1,student2,student3,student4,student5;

    strcpy(student1.name, "Kamal");
    strcpy(student2.name, "Nimal");
    strcpy(student3.name, "Sunil");
    strcpy(student4.name, "Kasun");
    strcpy(student5.name, "Upul");

    student1.age = 18;
    student2.age = 19;
    student3.age = 20;
    student4.age = 21;
    student5.age = 22;

    student1.IDNum = 201235;
    student2.IDNum = 201356;
    student3.IDNum = 204892;
    student4.IDNum = 204673;
    student5.IDNum = 201579;

    strcpy(student1.address,"28/1, matara");
    strcpy(student2.address,"23/7, matara");
    strcpy(student3.address,"21/5, matara");
    strcpy(student4.address,"25/1, matara");
    strcpy(student5.address,"26/2, matara");

    printf("student 1 name :%s\n",student1.name);
    printf("student 1 ID number : %d\n", student1.IDNum);
    printf("student 1 age : %d\n", student1.age);
    printf("student 1 address : %s\n", student1.address);

    printf("student 2 name :%s\n",student2.name);
    printf("student 2 ID number : %d\n", student2.IDNum);
    printf("student 2 age : %d\n", student2.age);
    printf("student 2 address : %s\n", student2.address);

    printf("student 3 name :%s\n",student3.name);
    printf("student 3 ID number : %d\n", student3.IDNum);
    printf("student 3 age : %d\n", student3.age);
    printf("student 3 address : %s\n", student3.address);

    printf("student 4 name :%s\n",student4.name);
    printf("student 4 ID number : %d\n", student4.IDNum);
    printf("student 4 age : %d\n", student4.age);
    printf("student 4 address : %s\n", student4.address);

    printf("student 5 name :%s\n",student5.name);
    printf("student 5 ID number : %d\n", student5.IDNum);
    printf("student 5 age : %d\n", student5.age);
    printf("student 5 address : %s\n", student5.address);



    return 0;
}
