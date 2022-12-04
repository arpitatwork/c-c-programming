#include <stdio.h>
main()
{
    int a, sum = 0, i;

    printf("enter a number: \n");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            sum++;
        }
    }

    if (sum == 2)
    {
        printf("the number is prime ");
    }
    else
    {
        printf("the number is not prime");
    }
}