#include <stdio.h>
#include <conio.h>

void main()
{

    int n,i,r=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=n;i!=0;i)
    {
        r=r*10;
        r=r+ i%10;
        i=i/10;
    }
    
    if(r==n)
        printf("palindrome");
    else
        printf("Not palindrome");
}
#include<stdio.h>
#include<conio.h>
void arm(int a);
int main()
{
	int a;
	printf("\t\t\tEnter a number\n\t\t\t ");
	scanf("%d",&a);
	arm (a);
	getch();
	return 0;
}
void arm(int a)
{
	int b,sum,remainder;
	b=a;
	while (a>0)
	{
		remainder=a%10;
		sum=sum+(remainder*remainder*remainder);
		a=(a-remainder)/10;
	}
	if (b==sum)
	{
		printf("\t\nIt is armstrong number\n");
	}
	else
	{
		printf("\n\tIt is not armstrong number\n");
	}
}

include<stdio.h>
void main(){
    int num, cNum, rem, sum;
    printf("Enter a number = ");
    scanf("%d",&num);   //153
    sum = 0;

    cNum = num; 
    while(cNum != 0){
        rem = cNum % 10;
        sum = sum + (rem * rem * rem);
        cNum = cNum / 10;
    }

    if(num == sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }