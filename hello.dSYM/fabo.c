#include <stdio.h>
int main()
{
    int f = 0, s = 1, i, n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            sum = i;
        }

        else
        {
            sum = f + s;
            f = s;
            s = sum;
        }
        printf(" %d", sum);
    }
    return 0;
}