#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main()

{
    int a;

    printf("enter 1 for add two numbers \n");
    printf("enter 2 for find simple inrtest \n");
    printf("enter 3 for area of triangle \n");
    printf("enter 4 for prime number checker \n");
    printf("enter 5 for odd and ever checker \n");
    printf("enter 6 for int addition \n");
    printf("enter 7 for palindrome checker \n");
    printf("enter 8 for greatest number finder \n");
    printf("enter 9 for switch case \n");
    printf("enter 10 for continue statement \n");
    printf("enter 11 for fibonacci serires \n");
    printf("enter 12 for add two numbers \n");
    printf("enter 13 for add two numbers \n");
    printf("enter 14 for add two numbers \n");
    printf("enter 15 for add two numbers \n");
    printf("enter 16 for add two numbers \n");
    printf("enter 17 for add two numbers \n");
    printf("enter 18 for add two numbers \n");
    printf("enter 19 for add two numbers \n");
    printf("enter 20 for add two numbers \n");
    printf("enter 21 for add two numbers \n");
    printf("enter 22 for add two numbers \n");

    printf("what do you wanna do ? \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        // how to add two numbers in c?

        uint32_t a;

        printf("Enter number 1: ");
        scanf("%hd", (uint16_t *)(&amp; a));

        printf("Enter number 2: ");
        scanf("%hd", ((uint16_t *)(&amp; a)) + 1);

        printf("%X\n", a);

        printf("Sum = %" PRIu32 "\n", (uint32_t)(*(uint16_t *)(&amp; a)) + *(((uint16_t *)(&amp; a)) + 1));

        return 0;

        break;

    case 2:
        // how to calculate simple interst in c?
        outstanding = loan;
        while (n > 0)
        {
            outstanding = (outstanding - payment);
            outstanding = (outstanding * (1 + (interest / 100)));

            printf("\Outstanding Balance after %i =%.2f\n\n", n, outstanding);
            n--;
        }

    case 3: // wap to find odd or even in c?
        if (x % 2)
        { /* x is odd */
        }



        int x;
        for (x = 0; x < 10; x++)
            if (x % 2)
                printf("%d is odd\n", x);
        return 0;

        int x;
        for (x = 0; x < 10; x++)
            if (x & amp; 1)
                printf("%d is odd\n", x);
        return 0;
    }

default:
    break;
}
