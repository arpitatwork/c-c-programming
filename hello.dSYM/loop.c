#include <stdio.h>
int main()
{
    int i, j, num;
    printf("enter a number : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)

    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int l = 0; l < num; l++)
        {
            printf("X");
        }
        for (int r = 0; r < num; r++)
        {
            printf("X");
        }
        for (int k = num; k >= i; k--)
        {
            printf("X");
        }
        for (j = i; j >= 1; j--)
        {
            printf("");
        }
        for (int q = 0; q > i; q--)
        {
            printf("&");
        }
        
        for (int k = num; k >= i; k--)
        {
            printf("X");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
