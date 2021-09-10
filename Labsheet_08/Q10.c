#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct book
{
     int  b_no;
     char b_name[40];
     char b_author[40];
     bool  flag;
};
int main()
{
     struct book b[20];
     int    ch,n,i,x,cou=0,count = 0;
     char   temp[40], temp2[40];
     do
     {
          printf("\t\tMENU");
          printf("\n-------------------------------------\n");
          printf("PRESS 1.TO ADD BOOK DETAILS.");
          printf("\nPRESS 2.TO DISPLAY BOOK DETAILS.");
          printf("\nPRESS 3.TO DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\nPRESS 4.TO DISPLAY NUMBER OF BOOK OF GIVEN TITLE.");
          printf("\nPRESS 5.TO COUNT NUMBER OF BOOKS.");
          printf("\nPRESS 6.TO EXIT.");
          printf("\n-------------------------------------\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("-------------------------------------\n");
                    printf("Add Details of %d Book\n",n);
                    printf("-------------------------------------\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].b_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].b_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].b_author);
                         printf("Book is issued(1) or not(2) : ");
                         scanf("%d",&x);
                         if(x==1)
                         {
                             b[i].flag = false;
                             count+= -1;
                         }
                         else if(x==2)
                         {
                             b[i].flag = true;
                         }
                         printf("-------------------------------------\n");
                    }
                    break;
               case 2:
                    printf("\n\t\tDetails of All Book");
                    printf("\n-----------------------------------------------------------\n");
                    printf("Book No.   Book Name\t  Author Name\t Status");
                    printf("\n------------------------------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t  %s\t  ",b[i].b_no,b[i].b_name,b[i].b_author);
                         if(b[i].flag>0)
                         {
                             printf("Book is issued");
                         }else
                         {
                             printf("Book is not issued");
                         }
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    printf("--------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_author,temp) == 0)
                         {
                              printf("\n%s\n",b[i].b_name);
                         }
                    }
                    break;
             case 4 :
                    printf("\nEnter Book Title: ");
                    scanf("%s",temp2);
                    printf("--------------------------------------");
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].b_name,temp2) == 0)
                         {
                              cou++;
                         }
                    }
                    printf("%d Books.\n", cou);
                    break;
             case 5 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    printf("-----------------------------------------\n");
                    break;
             case 6 :
                    exit(0);
          }
     }while(ch != 6);
     return 0;
}
