#include <stdio.h>
#include <string.h>
struct employee
{
    int ID;
    char Name[10];
    int Salary;
    char FathersName[10];
    char Position[10];
    int Age;
};
main()
{
    int a;
    printf("enter the number of employee\n");
    scanf("%d", &a);
    struct employee e[a];
    int i;
    for (i = 0; i <= a - 1; i++)
    {
        printf("Enter the id of the employee : \n");
        scanf("%d", &e[i].ID);
        printf("Enter the Name of the employee :\n");
        scanf("%s", &e[i].Name);
        printf("Enter the Position of the employee : \n");
        scanf("%s", &e[i].Position);
        printf("Enter the Fathers Name of the employee : \n");
        scanf("%s", &e[i].FathersName);
        printf("Enter the Salary of the employee : \n");
        scanf("%d", &e[i].Salary);
        printf("Enter the Age of the employee : \n");
        scanf("%d", &e[i].Age);
    }
    for (int i = 0; i <= a - 1; i++)
    {
        printf("The id of employee is :  %d\n ", e[i].ID);
        printf("The Name of employee is : %s\n", e[i].Name);
        printf("The position of employee is : %s\n", e[i].Position);
        printf("The father's name  of employee is : %s\n", e[i].FathersName);
        printf("The salalry of employee is : %d\n", e[i].Salary);
        printf("The age of the employee is : %d\n", e[i].Age);
    }
}