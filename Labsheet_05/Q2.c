#include <stdio.h>
#include <stdlib.h>
int mat3[3][3],i,j;

int matrixadd(int mat1[][3], int mat2[][3])
{
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            mat3[i][j]=mat1[i][j] + mat2[i][j] ;
        }
    }
    printf("ADDTION OF THE TWO MATRIX\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%d\t",mat3[i][j]);
        }
         printf("\n");
    }
    printf("\n\n");

}
int matrixsub(int mat1[][3], int mat2[][3])
{
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            mat3[i][j]= mat1[i][j] - mat2[i][j] ;
        }
    }
    printf("SUBTRACTION OF THE TWO MATRIX\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%d\t",mat3[i][j]);
        }
         printf("\n");
    }
   printf("\n\n");
}
int matrixmulti(int mat1[][3], int mat2[][3])
{
    int mat3[3][3] =
    {
        {0,0,0},
        {0,0,0},
        {0,0,0},
    };

    int k;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                mat3[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }
    printf("MULTIPLICATION OF THE TWO MATRIX\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%d\t",mat3[i][j]);
        }
         printf("\n");
    }
   printf("\n\n");
}
int main()
{

    int mat1[3][3] =
    {
        {3,5,7},
        {1,6,5},
        {4,9,8},
    };
    int mat2[3][3] =
    {
        {6,0,2},
        {4,7,1},
        {7,2,1},
    };
    matrixadd(mat1,mat2);
    matrixsub(mat1,mat2);
    matrixmulti(mat1,mat2);

}
