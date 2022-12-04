#include <stdio.h>
#include <string.h>


struct Person {
  char name[50];
  int ID;
  float salary;
} person1;

int main() {

  
  scanf("%d",&person1.ID);
  scanf("%f",&person1.salary);
  scanf("%s",&person1.name);


  
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.ID);
  printf("Salary: %.2f", person1.salary);

  return 0;
}