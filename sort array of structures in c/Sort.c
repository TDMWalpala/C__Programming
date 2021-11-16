#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
struct StudentRec{
    int long stNo;
    char stName[40];
    int stMark;
    int stRank;
};
struct StudentRec StudDB[SIZE] = {{100,"Tharindu",87,0},
                                 {101,"Darshana",78,0},
                                 {102,"Nimal   ",65,0},
                                 {103,"Kasun   ",63,0},
                                 {104,"Sarath   ",50,0},
                                 {105,"Amal     ",90,0},
                                 {106,"Vimal   ",45,0},
                                 {107,"Suran   ",50,0}
                                 };

void sortDesce(struct StudentRec StudDB[SIZE], int s)
{
    int i, j;
    struct StudentRec temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (StudDB[j].stMark < StudDB[j + 1].stMark)
            {
                temp = StudDB[j];
                StudDB[j] = StudDB[j + 1];
                StudDB[j + 1] = temp;
            }
        }
    }
}
void Ranking(){
    int rank =1;
    for(int i=0;i<SIZE;i++){
        if(StudDB[i].stNo!=0){
            StudDB[i].stRank = rank;
            rank++;
        }
    }
}

void Display(){
    for(int i=0; i<SIZE; i++){
       printf("%d\t%s\t%d\t%d\n",StudDB[i].stNo,StudDB[i].stName,StudDB[i].stMark,StudDB[i].stRank);
    }
}

int main()
{
    sortDesce(StudDB,SIZE);
    Ranking();
    Display();
    return 0;
}
