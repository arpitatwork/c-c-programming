#include <stdio.h> 

main() {
  int n, i, p = 0;
  printf("Enter any number :\n");
  scanf("%d", &n);

  
  for (i = 1; i <=n; i++) {
      if (n % i == 0) {
         p++;
      }
  }

  if (p == 2) {
        printf("the number is a Prime number");
  }
  else {
         printf("the number is not a Prime number");
  }
  return 0;    
}