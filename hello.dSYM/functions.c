# include <stdio.h>

void takeInput (){
    int a;
    printf("enter a number \t");
    scanf("%d",&a);
    a++;
}
void takeSecondInput (){
    int b;
    printf("enter a number \t");
    scanf("%d",&b);
    b++;
}

main(){
    int sum;
    sum = takeInput+takeSecondInput;
    printf("the sum is \t",sum)
}