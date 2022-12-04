#include<stdio.h>
main(){
    int a,i ,thisPrime = 1;
    printf("enter a number :");
    scanf("%d",&a);
    for ( i = 2; i*i< a; i++)
    {
        if(a%i==0){
        thisPrime = 0;
        }

    }
    if (thisPrime){
        printf("this number %d is prime.",a);
    }
    else {
        printf("this number %d is not prime.",a);
    }

}