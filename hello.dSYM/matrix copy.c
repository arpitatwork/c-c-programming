#include <stdio.h>
int main()
{
    int row, column, mat1[10][10], mat2[10][10], sum[10][10], i, j;
    printf("Enter the number of rows and columns : \n");
    scanf("%d %d", &row, &column);
    printf("\nInput Matrix 1 elements : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nMatrix 1\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nInput Matrix 2 elements : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d ", &mat2[i][j]);
        }
    }
    printf("\nMatrix 2\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    // Adding Two matrices
    printf("\nAdded Matrix\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    // print the result

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j)
        {
            printf("%d ", sum[i][j]);

            if (j == column - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}