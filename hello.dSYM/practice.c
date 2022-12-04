#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
main(){
    int IsFaibo , NoOfUnits , first = 0 , second = 1 , i ,sum;
    printf("enter a number : \n ");
    scanf("%d",&NoOfUnits);
    
    for ( i = 0; i < NoOfUnits; i++)
    {
        if (i<=1)
        {
            sum = i;
        }
        else{
            sum = first + second;
            first = second;
            second = sum;
            
        }
        
        printf("%d ",sum);

    
    }
    
}