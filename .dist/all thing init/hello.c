#include <stdio.h>
#include<string.h>
main()
{
    int num , temp , sum = 0, rem;
    printf("enter a num ber to check the number is palinderome or not?");
    scanf("%d",&num);
    temp = num;
    while (num>0)
    {
        rem = num % 10;
        sum = (sum*10) + rem;
        num = num /10;

    }
    if (temp == sum )
    {
        printf("the number is pili");
    }
    else{
        printf("the number is not pile");
        
    }
    


    return 1;
}
//write a program to check the number  is palindrome or not in c?

