#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
main()
{
    int mat1[10][10], mat2[10][10], sum[10][10], row, column, i, j;
    printf("enter the number of rows:\n");
    scanf("%d", &row);
    printf("enter the number of column:\n");
    scanf("%d", &column);
    printf("\nyou've chosen row %d and colum %d \n ", row, column);
    printf("enter the elements of the first matrix :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nyou've enter these elements in matrix first : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the elements of matrix second:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nyou've enter these elements in matrix second : \n");
    sleep(1);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n \nLOADING...");

    printf("\nthe addition of these two matrix is : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
