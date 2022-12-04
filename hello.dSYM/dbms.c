#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    int choice1;
    char name[25],a;
    int rollnum;
    char cnfrm = 'H';
    float gpa;
    do{
        printf("\e[1;1H\e[2J");
        printf("Welcome to the database of HARVARD.\n");
        printf("Do you want to Add or see details(1/2): ");
        scanf("%d",&choice1);
        if(choice1 == 1)
        {
            printf("\e[1;1H\e[2J");
            FILE *pF = fopen("Records.txt","a");
            printf("How many student's details you want to add?: ");
            scanf("%d",&n);
            while(n!=0)
            {
                printf("\e[1;1H\e[2J");
                printf("Enter name: ");
                fflush(stdin);
                scanf("%s",&name);
                printf("Enter roll number: ");
                scanf("%d",&rollnum);
                printf("Enter gpa: ");
                scanf("%f",&gpa);
                fprintf(pF,"%d.\t%-12s\t%.2f\n",rollnum,name,gpa);
                n--;
            }
            fclose(pF);
        }
        else if(choice1 == 2)
        {
            printf("\e[1;1H\e[2J");
            FILE *pF = fopen("Records.txt","r");
            char buffer[255];
            while(fgets(buffer,255,pF) != NULL)
            {
                printf("%s",buffer);
                }
            fclose(pF);
            fflush(stdin);
            scanf("%c",&a);
        }
        else
        {
            printf("\e[1;1H\e[2J");
            printf("Error! Could connect beacuse of INVAILD INPUT..");
        }
        printf("\e[1;1H\e[2J");
        fflush(stdin);
        printf("Press enter to continue and enter Y to exit: ");
        scanf("%c",&cnfrm);
        
    }while(cnfrm != 'Y');
    return 0;
}
