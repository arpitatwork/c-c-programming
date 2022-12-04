#include <stdio.h>

int main() {
  int i ,a;
    printf("enter a number : \n");
    scanf("%d",&a);

  for (i = 1; i < a ; i++)
  {
    printf("** ");
    for ( int j = 1; j < i ; j++)
    {
        printf("** ");
    }
    printf("\n");

  }
  return 0;
}