#include <stdio.h>
void main()
{
    int num, cNum, rem, sum;
    printf("Enter a number = ");
    scanf("%d", &num); // 153
    sum = 0;

    cNum = num;
    while (cNum != 0)
    {
        rem = cNum % 10;
        sum = sum + (rem * rem * rem);
        cNum = cNum / 10;
    }

    if (num == sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}