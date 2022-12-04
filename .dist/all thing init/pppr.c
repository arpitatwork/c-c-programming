#include <stdio.h>

struct hello
{
    char name[30];
    int empID;
    float salary;
    int phoneNumber;
};

main()
{
    struct hello emp;

    for (i = 0; i < 1; i++)
    {
        printf("enter a your name\n");
        scanf("%s", &emp[i].name);
        printf("enter a your empID\n");
        scanf("%d", &emp[i].empID);
        printf("enter a your salary\n");
        scanf("%f", &emp[i].salary);
        printf("enter a your phoneNumber\n");
        scanf("%d", &emp[i].phoneNumber);
    }

    for (i = 0; i < 1; i++)
    {
        printf(emp.name\n);
        printf(emp.empID\n);
        printf(emp.salary\n);
        printf(emp.phoneNumber\n);
    }

    return 0;
}