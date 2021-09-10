#include <stdio.h>
#include <stdlib.h>

struct Marks
{
	int ID_No;
	char Name[10];
	float chem_marks,phy_marks,maths_marks;
	
};

void main()
{
	struct Marks student[5];

	for(int i=0; i<5; i++)
	{
		printf("student %d.\n",i+1);
		printf("Enter ID Number :");
		scanf("%d",&student[i].ID_No);
		printf("Enter Name : ");
		scanf("%s",student[i].Name);
		printf("Enter Chemistry Marks : ");
		scanf("%f", &student[i].chem_marks);
		printf("Enter Mathematics Marks : ");
		scanf("%f", &student[i].maths_marks);
		printf("Enter Physics Marks : ");
		scanf("%f", &student[i].phy_marks);
	}

  for(int i=0; i<5; i++)
  {
    printf("student Name : %s\nstudent ID Number : %d\n", student[i].Name, student[i].ID_No);
    float percentage = (student[i].chem_marks+student[i].phy_marks+student[i].maths_marks)*100/300;
    printf("percentage : %0.2f\n", percentage);
  }
  return 0;
}